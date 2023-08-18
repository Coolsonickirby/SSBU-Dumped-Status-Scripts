
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKroolCrown::status::Throw_main_loop(L2CWeaponKroolCrown *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  int iVar6;
  ulong uVar7;
  Hash40 HVar8;
  float fVar9;
  float fVar10;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_FLAG_IS_THROW_MOTION_END);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    fVar9 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,uVar4);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_FLAG_IS_THROW_MOTION_END);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x300fc33b1);
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      lib::L2CValue::L2CValue(aLStack128,false);
      HVar8 = lib::L2CValue::as_hash(aLStack80);
      fVar9 = (float)lib::L2CValue::as_number(aLStack96);
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      bVar1 = lib::L2CValue::as_bool(aLStack128);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar8,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      fVar9 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_frame_impl(this->moduleAccessor,fVar9,true);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_FLOAT_MOTION_RATE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      fVar9 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,fVar9);
      fVar9 = (float)lib::L2CValue::as_number(aLStack80);
      app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar9);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
      GVar5 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar5);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_INT_FALL_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar6 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar6);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_KINETIC_TYPE_KROOL_CROWN_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  else {
    FUN_710002d650(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

