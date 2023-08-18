
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponShizueTomnook::status::Construct_main(L2CWeaponShizueTomnook *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  BattleObjectModuleAccessor **ppBVar6;
  float fVar7;
  float fVar8;
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
    if ((uVar4 & 1) == 0) goto LAB_7100042b08;
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_TOMNOOK_GENERATE_ARTICLE_FURNITURE_01);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    ppBVar6 = &this->moduleAccessor;
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar6,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_TOMNOOK_GENERATE_ARTICLE_FURNITURE_02);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar6,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_TOMNOOK_GENERATE_ARTICLE_FURNITURE_03);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar6,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_TOMNOOK_GENERATE_ARTICLE_FURNITURE_04);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar6,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_TOMNOOK_GENERATE_ARTICLE_FURNITURE_01);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__set_visibility_whole_impl(*ppBVar6,iVar2,(bool)(bVar1 & 1),0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_TOMNOOK_GENERATE_ARTICLE_FURNITURE_02);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__set_visibility_whole_impl(*ppBVar6,iVar2,(bool)(bVar1 & 1),0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_TOMNOOK_GENERATE_ARTICLE_FURNITURE_03);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__set_visibility_whole_impl(*ppBVar6,iVar2,(bool)(bVar1 & 1),0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_SHIZUE_TOMNOOK_GENERATE_ARTICLE_FURNITURE_04);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__set_visibility_whole_impl(*ppBVar6,iVar2,(bool)(bVar1 & 1),0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TOMNOOK_GENERATE_ARTICLE_FURNITURE_01);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    ppBVar6 = &this->moduleAccessor;
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar6,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TOMNOOK_GENERATE_ARTICLE_FURNITURE_02);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar6,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TOMNOOK_GENERATE_ARTICLE_FURNITURE_03);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar6,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TOMNOOK_GENERATE_ARTICLE_FURNITURE_04);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__generate_article_impl(*ppBVar6,iVar2,false,-1);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TOMNOOK_GENERATE_ARTICLE_FURNITURE_01);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__set_visibility_whole_impl(*ppBVar6,iVar2,(bool)(bVar1 & 1),0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TOMNOOK_GENERATE_ARTICLE_FURNITURE_02);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__set_visibility_whole_impl(*ppBVar6,iVar2,(bool)(bVar1 & 1),0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TOMNOOK_GENERATE_ARTICLE_FURNITURE_03);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__set_visibility_whole_impl(*ppBVar6,iVar2,(bool)(bVar1 & 1),0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TOMNOOK_GENERATE_ARTICLE_FURNITURE_04);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::ArticleModule__set_visibility_whole_impl(*ppBVar6,iVar2,(bool)(bVar1 & 1),0);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100042b08:
  ppBVar6 = &this->moduleAccessor;
  fVar7 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::L2CValue(aLStack96,-1.0);
  uVar4 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0xba29f2cca);
    lib::L2CValue::operator_(aLStack112,aLStack96);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xb589011a9);
    lib::L2CValue::operator_(aLStack112,aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash(aLStack112);
  fVar7 = (float)lib::L2CValue::as_number(aLStack96);
  fVar8 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (*ppBVar6,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MURABITO_TOMNOOK_INSTANCE_WORK_ID_FLAG_ATTACK);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,Construct_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

