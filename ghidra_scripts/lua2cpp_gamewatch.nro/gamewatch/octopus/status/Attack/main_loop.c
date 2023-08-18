
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGamewatchOctopus::status::Attack_main_loop
          (L2CWeaponGamewatchOctopus *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this_00;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) goto LAB_710003bc10;
  lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) goto LAB_710003ba94;
    lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::ControlModule__check_button_release_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack128,CONTROL_PAD_BUTTON_SPECIAL);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::ControlModule__check_button_release_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_710003bc10;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_WORK_FLOAT_MOTION_RATE);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar4 = lib::L2CValue::operator_(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      fVar6 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::MotionModule__set_whole_rate_impl(this->moduleAccessor,fVar6);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_WORK_FLOAT_MOTION_RATE);
      fVar6 = (float)lib::L2CValue::as_number(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      this_00 = aLStack80;
      goto LAB_710003bc04;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710003ba94:
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_WORK_FLOAT_MOTION_RATE);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::L2CValue(aLStack80,1e-05);
    uVar4 = lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) goto LAB_710003bc10;
    fVar6 = (float)app::lua_bind::MotionModule__whole_rate_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::L2CValue(aLStack128,0xdec0a3c43);
    lib::L2CValue::L2CValue(aLStack144,0x120d697435);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    lib::L2CValue::operator_(aLStack96,aLStack112);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::MotionModule__set_whole_rate_impl(this->moduleAccessor,fVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_WORK_FLOAT_MOTION_RATE);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack112;
LAB_710003bc04:
    lib::L2CValue::_L2CValue(this_00);
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710003bc10:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

