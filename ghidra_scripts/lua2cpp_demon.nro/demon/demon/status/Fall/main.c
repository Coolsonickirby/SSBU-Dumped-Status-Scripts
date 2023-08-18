
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterDemon::status::Fall_main(L2CFighterDemon *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *this_00;
  ulong uVar3;
  ulong uVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100046a40);
  lua2cpp::L2CFighterCommon::status_FallSub(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,10);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_6);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_SPECIAL);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ITEM_THROW);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_LASSO);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ESCAPE);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_ATTACK);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__unable_transition_term_group_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack112,0x2748edf655);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack64,iVar1);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_DEMON_STATUS_FALL_WORK_INT_INVALID_ATTACK_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack64,Fall_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

