
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::ItemSwingS4Hold_exit(L2CFighterBayonetta *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  L2CValue *this_00;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_uniq_process_item_swing_exit_status(this);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ITEM_SWING_S4);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_BAYONETTA_STATUS_ITEM_SWING_INT_WITCH_TIME_SMASH_HOLD);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_WORK_ID_FLOAT_RESERVE_HOLD_RATE);
      iVar2 = lib::L2CValue::as_integer(aLStack160);
      fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack144,fVar5);
      lib::L2CValue::L2CValue(aLStack192,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack208,0x1a39f14203);
      uVar3 = lib::L2CValue::as_integer(aLStack192);
      uVar4 = lib::L2CValue::as_integer(aLStack208);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack176,fVar5);
      lib::L2CValue::operator_(aLStack144,aLStack176);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_WORK_ID_FLOAT_RESERVE_HOLD_RATE);
      fVar5 = (float)lib::L2CValue::as_number(aLStack112);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

