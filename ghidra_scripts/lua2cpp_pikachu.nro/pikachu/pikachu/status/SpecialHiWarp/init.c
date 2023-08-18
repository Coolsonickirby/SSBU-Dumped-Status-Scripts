
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPikachu::status::SpecialHiWarp_init(L2CFighterPikachu *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_710000c820();
  lib::L2CValue::L2CValue
            (aLStack160,_FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_WARP_SPEED_X);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue
            (aLStack160,_FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_WARP_SPEED_Y);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  fVar3 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,fVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0.001);
  uVar2 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,-0.001);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar2 & 1) == 0) goto LAB_7100002990;
    lib::L2CValue::L2CValue(aLStack160,-1.0);
    fVar3 = (float)lib::L2CValue::as_number(aLStack160);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar3);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,1.0);
    fVar3 = (float)lib::L2CValue::as_number(aLStack160);
    app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar3);
  }
  lib::L2CValue::_L2CValue(aLStack160);
LAB_7100002990:
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_kinetic_energy::set_stable_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  fVar3 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar3);
  lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  fVar3 = (float)lib::L2CValue::as_number(aLStack80);
  fVar4 = (float)lib::L2CValue::as_number(aLStack96);
  uVar5 = app::sv_math::vec2_normalize(fVar3,fVar4);
  lib::L2CValue::L2CValue(aLStack160,(float)uVar5);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar5 >> 0x20));
  lib::L2CValue::operator_(aLStack80,aLStack160);
  lib::L2CValue::operator_(aLStack96,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::operator_(aLStack80,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue
            (aLStack160,_FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_X);
  fVar3 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::operator_(aLStack96,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue
            (aLStack160,_FIGHTER_PIKACHU_STATUS_WORK_ID_FLOAT_QUICK_ATTACK_PREV_STICK_Y);
  fVar3 = (float)lib::L2CValue::as_number(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar3,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_710000d470(this);
  FUN_710000b2a0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

