
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::DemonSpecialNAirStart_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_SPECIAL_N_INT_AIR_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack128,0x14b2c1c21e);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    uVar4 = lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) goto LAB_7100118010;
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_7100118010;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_DEMON_SPECIAL_N_AIR_SHOOT);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
LAB_7100118010:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

