
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucario::status::SpecialHi_end(L2CFighterLucario *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  BattleObjectModuleAccessor *pBVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LUCARIO_STATUS_KIND_SPECIAL_HI_RUSH);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0x31d39a761);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::ModelModule__clear_joint_srt_impl(this->moduleAccessor,HVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x35dbfe258);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::ModelModule__clear_joint_srt_impl(this->moduleAccessor,HVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    iVar2 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      lib::L2CValue::L2CValue(aLStack80,true);
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar3);
      bVar1 = lib::L2CValue::as_bool(aLStack80);
      app::FighterSpecializer_Lucario::set_mach_validity(pBVar6,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

