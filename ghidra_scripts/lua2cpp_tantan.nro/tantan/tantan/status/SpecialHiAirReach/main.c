
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::SpecialHiAirReach_main(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  LinkAttribute LVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  Article *pAVar9;
  BattleObjectModuleAccessor *pBVar10;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0xed8a31e01);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND);
  lVar5 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_IS_L);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x59a6ef56c);
  lib::L2CValue::L2CValue(aLStack96,0xadd214353);
  lVar5 = lib::L2CValue::as_integer(aLStack80);
  lVar6 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x71a99f496);
  lib::L2CValue::L2CValue(aLStack96,0xcec1191d4);
  lVar5 = lib::L2CValue::as_integer(aLStack80);
  lVar6 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar6);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x105739d665);
  lib::L2CValue::L2CValue(aLStack96,0xed8a31e01);
  lib::L2CValue::L2CValue(aLStack112,false);
  lib::L2CValue::L2CValue(aLStack128,true);
  lib::L2CValue::L2CValue(aLStack144,aLStack80);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  FUN_7100039930(this,aLStack112,aLStack128,aLStack144,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack192,0xed8a31e01);
  lib::L2CValue::L2CValue(aLStack208,true);
  FUN_7100039610(aLStack176,this,aLStack192,aLStack208);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack224,true);
  FUN_7100027640(this,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack256,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar2 = lib::L2CValue::as_integer(aLStack256);
  pvVar7 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar2);
  if (pvVar7 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack240,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,pvVar7);
  }
  lib::L2CValue::_L2CValue(aLStack256);
  uVar8 = lib::L2CValue::operator__
                    (aLStack240,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
  ;
  if ((uVar8 & 1) == 0) {
    pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack240);
    uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
    lib::L2CValue::L2CValue(aLStack272,uVar3);
    uVar3 = lib::L2CValue::as_integer(aLStack272);
    pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack256,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,pvVar7);
    }
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    lib::L2CValue::L2CValue(aLStack288,true);
    FUN_710003b450(this,aLStack272,aLStack288);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue
              (aLStack320,_WEAPON_TANTAN_SPIRALLEFT_INSTANCE_WORK_ID_INT_PUNCH_OBJECT_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack320);
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack256);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(pBVar10,iVar2);
    lib::L2CValue::L2CValue(aLStack304,iVar2);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_TANTAN_LINK_NO_PUNCH_L);
    iVar2 = lib::L2CValue::as_integer(aLStack336);
    uVar3 = lib::L2CValue::as_integer(aLStack304);
    bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar2,uVar3);
    lib::L2CValue::L2CValue(aLStack320,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::L2CValue(aLStack336,_FIGHTER_TANTAN_LINK_NO_PUNCH_L);
    lib::L2CValue::L2CValue(aLStack352,LINK_ATTRIBUTE_REFERENCE_PARENT_STOP);
    lib::L2CValue::L2CValue(aLStack368,true);
    iVar2 = lib::L2CValue::as_integer(aLStack336);
    LVar4 = lib::L2CValue::as_integer(aLStack352);
    bVar1 = lib::L2CValue::as_bool(aLStack368);
    app::lua_bind::LinkModule__set_attribute_impl
              (this->moduleAccessor,iVar2,LVar4,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack256);
  }
  lib::L2CValue::L2CValue(aLStack256,SpecialHiAirReach_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

