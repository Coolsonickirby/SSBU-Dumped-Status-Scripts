
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialHiJump_end(L2CFighterInkling *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_HI_ROT);
  uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_HI_STOP_CEIL)
    ;
    uVar4 = lib::L2CValue::operator__(pLVar3,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      uVar4 = lib::L2CValue::as_number(aLStack96);
      lVar6 = lib::L2CValue::as_number(aLStack112);
      uVar5 = lib::L2CValue::as_number(aLStack128);
      local_50 = uVar4 & 0xffffffff | lVar6 << 0x20;
      uStack72 = (ulong)uVar5;
      app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
      app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_EXIST_SQUID);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

