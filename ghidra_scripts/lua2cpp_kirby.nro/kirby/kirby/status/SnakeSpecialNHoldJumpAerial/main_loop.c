
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::SnakeSpecialNHoldJumpAerial_main_loop
          (L2CFighterKirby *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_ItemShootAir_Common_Main(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    FUN_7100173cf0(aLStack64,this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar1 & 1U) == 0) {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((bVar1 & 1U) == 0) {
        lua2cpp::L2CFighterCommon::sub_ftStatusUniqProcessItemShoot_execFixPos_Common(this);
        iVar3 = 0;
        goto LAB_710017505c;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_ITEM_SHOOT_WORK_INT_STATUS_KIND_AIR);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  iVar3 = 1;
LAB_710017505c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

