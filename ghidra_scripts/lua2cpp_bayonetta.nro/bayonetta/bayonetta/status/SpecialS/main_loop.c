
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::SpecialS_main_loop(L2CFighterBayonetta *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *this_00;
  float fVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_710002b414;
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_WALL_CHECK);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) == 0) {
LAB_710002b320:
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar5 & 1) == 0) {
      bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar2 & 1U) == 0) {
        FUN_7100029160(this);
        goto LAB_710002b414;
      }
      lib::L2CValue::L2CValue
                (aLStack64,_FIGHTER_BAYONETTA_STATUS_WORK_ID_SPECIAL_S_FLAG_HIT_CANCEL_OK);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_DAMAGE_FALL);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
  }
  else {
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar6);
    lib::L2CValue::L2CValue(aLStack64,0.0);
    uVar5 = lib::L2CValue::operator__(aLStack64,aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_LEFT);
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_710002b320;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_WALL_END);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,GROUND_TOUCH_FLAG_RIGHT);
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar4);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) == 0) goto LAB_710002b320;
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_KIND_SPECIAL_AIR_S_WALL_END);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    }
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_710002b414:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

