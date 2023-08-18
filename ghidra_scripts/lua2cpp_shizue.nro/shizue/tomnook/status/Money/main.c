
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponShizueTomnook::status::Money_main(L2CWeaponShizueTomnook *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  float fVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_KIND_MURABITO_TOMNOOK);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,2);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_KIND_SHIZUE_TOMNOOK);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) goto LAB_7100042040;
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_TOMNOOK_GENERATE_ARTICLE_MONEYBAG);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_TOMNOOK_GENERATE_ARTICLE_MONEYBAG);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__set_visibility_whole_impl
              (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TOMNOOK_GENERATE_ARTICLE_MONEYBAG);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TOMNOOK_GENERATE_ARTICLE_MONEYBAG);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__set_visibility_whole_impl
              (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100042040:
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar6);
  lib::L2CValue::L2CValue(aLStack96,-1.0);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x77c5d839d);
    lib::L2CValue::operator_(aLStack112,aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x78652befe);
    lib::L2CValue::operator_(aLStack112,aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  fVar6 = (float)lib::L2CValue::as_number(aLStack96);
  fVar7 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar5,fVar6,fVar7,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,Money_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

