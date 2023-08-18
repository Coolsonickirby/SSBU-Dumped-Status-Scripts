
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialHiFall_end(L2CFighterKrool *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *pLVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,pLVar3);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ANIMCMD_SOUND);
  lib::L2CValue::L2CValue(aLStack96,0x22553cc4b2);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar1,HVar4,-1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_STATUS_KIND_SPECIAL_HI_LANDING);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_GENERATE_ARTICLE_BACKPACK);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_KROOL_BACKPACK_STATUS_KIND_DAMAGE_END);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

