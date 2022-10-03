import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { NavbarComponent } from './navbar/navbar.component';
import { LoginPageComponent } from './login-page/login-page.component';
import { ResetPasswordPageComponent } from './reset-password-page/reset-password-page.component';
import { SignupPageComponent } from './signup-page/signup-page.component';
import { PetsPageComponentComponent } from './pets-page-component/pets-page-component.component';

@NgModule({
  declarations: [
    AppComponent,
    NavbarComponent,
    LoginPageComponent,
    ResetPasswordPageComponent,
    SignupPageComponent,
    PetsPageComponentComponent
  ],
  imports: [
    BrowserModule,
    AppRoutingModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
