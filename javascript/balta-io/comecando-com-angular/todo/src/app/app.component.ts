import { Component } from '@angular/core';
import { FormBuilder, FormGroup, Validators } from '@angular/forms';
import { Todo } from 'src/models/todo.model';

@Component({
  selector: 'app-root', // <app-root>
  templateUrl: './app.component.html',
  //template: '<p>Meu template</p>',
  styleUrls: ['./app.component.css'],
})
export class AppComponent {
  public todos: Todo[] = [];
  public title: String = 'Minhas tarefas';
  public form: FormGroup;

  constructor(private fb: FormBuilder) {
    this.form = this.fb.group({
      title: ['', Validators.compose([
        Validators.minLength(3),
        Validators.maxLength(60),
        Validators.required,
      ])]
    });
    this.todos.push(new Todo(1, 'Ir à luta de judô', false));
    this.todos.push(new Todo(2, 'Ir ao mercado', false));
    this.todos.push(new Todo(3, 'Cortar o cabelo', true));
  }

  alteraTexto() {
    this.title = 'Novo título';
  }

  remove(todo: Todo) {
    const index = this.todos.indexOf(todo);
    if(index !== -1) {
      this.todos.splice(index, 1);
    }
  }

  markAsDone(todo: Todo) {
    todo.done = true;
  }

  markAsUndone(todo: Todo) {
    todo.done = false;
  }
}
