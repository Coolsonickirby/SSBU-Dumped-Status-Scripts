
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PickelSpecialN3JumpAerial_main
          (L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_JUMP_AERIAL);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FLY);
  lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  uVar2 = lib::L2CValue::operator__(aLStack64,aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_jump_item_rocketbelt(this);
    lua2cpp::L2CFighterCommon::status_FlySub(this);
  }
  FUN_7100127aa0(this);
  FUN_7100120960(this);
  lib::L2CValue::L2CValue(aLStack64,PickelSpecialN3JumpAerial_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

