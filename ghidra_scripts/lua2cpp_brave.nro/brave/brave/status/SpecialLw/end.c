
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBrave::status::SpecialLw_end(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Fighter *pFVar6;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_SELECT);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::L2CValue(aLStack96,true);
    pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    bVar2 = lib::L2CValue::as_bool(aLStack96);
    app::FighterSpecializer_Brave::special_lw_close_window
              (pFVar6,(bool)(bVar1 & 1),(bool)(bVar2 & 1),false);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_DISABLE_SP_AUTO_RECOVER);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

