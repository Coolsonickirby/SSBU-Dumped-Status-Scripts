
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKen::status::DashBack_end(L2CFighterKen *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_RYU_STATUS_KIND_TURN_RUN_BACK);
  lua2cpp::L2CFighterCommon::sub_dash_uniq_process_exit_common(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ATTACK_S4_START);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ITEM_SWING_S4_START);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) goto LAB_7100016718;
  }
  app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
LAB_7100016718:
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::L2CValue(aLStack112,true);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::GroundModule__set_reverse_direction_impl
            (this->moduleAccessor,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

