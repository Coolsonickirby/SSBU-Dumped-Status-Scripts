
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaPowerstar::status::Start_main_loop
          (L2CWeaponRosettaPowerstar *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    fVar5 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::L2CValue(aLStack96,0xf994e6f6f);
    lib::L2CValue::L2CValue(aLStack112,0xc3f09e55d);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar3 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_ROSETTA_POWERSTAR_STATUS_KIND_LOOP);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
      iVar2 = 1;
      goto LAB_710000fb7c;
    }
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_POWERSTAR_INSTANCE_WORK_ID_FLOAT_ADD_ANGLE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_POWERSTAR_INSTANCE_WORK_ID_FLOAT_ANGLE);
    fVar5 = (float)lib::L2CValue::as_number(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__add_float_impl(this->moduleAccessor,fVar5,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    fVar5 = (float)app::lua_bind::PostureModule__base_scale_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar5);
    lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_POWERSTAR_INSTANCE_WORK_ID_FLOAT_ADD_SCALE);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar5);
    lib::L2CValue::operator_(aLStack80,aLStack96);
    fVar5 = (float)lib::L2CValue::as_number(aLStack64);
    app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar5,false);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack64,iVar2);
    FUN_710000f5b0(this,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  iVar2 = 0;
LAB_710000fb7c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}

