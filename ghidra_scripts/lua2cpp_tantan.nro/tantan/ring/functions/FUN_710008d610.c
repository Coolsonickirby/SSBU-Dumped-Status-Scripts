
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710008d610(L2CAgent *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  BattleObjectModuleAccessor *pBVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  Hash40 HVar10;
  float fVar11;
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
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
  
  lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = app::lua_bind::LinkModule__get_parent_id_impl(param_1->moduleAccessor,iVar2,true);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar4);
  }
  lib::L2CValue::L2CValue(aLStack128,false);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALRIGHT);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
  pvVar4 = (void *)app::lua_bind::ArticleModule__get_article_impl(pBVar5,iVar2);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack160,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,pvVar4);
  }
  uVar6 = lib::L2CValue::operator==
                    (aLStack160,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X)
  ;
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xb616c555c);
    lib::L2CValue::L2CValue(aLStack176,0x12bfd89fca);
    lVar7 = lib::L2CValue::as_integer(aLStack80);
    lVar8 = lib::L2CValue::as_integer(aLStack176);
    pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
    app::lua_bind::VisibilityModule__set_status_default_int64_impl(pBVar5,lVar7,lVar8);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  pBVar5 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
  iVar2 = app::lua_bind::StatusModule__status_kind_impl(pBVar5);
  lib::L2CValue::L2CValue(aLStack176,iVar2);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_STANDBY);
  uVar6 = lib::L2CValue::operator==(aLStack176,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_DEAD);
    uVar6 = lib::L2CValue::operator==(aLStack176,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) goto LAB_710008d7f8;
  }
  lib::L2CValue::L2CValue(aLStack80,true);
  lib::L2CValue::operator=(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710008d7f8:
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xa3ddec741);
    lib::L2CValue::L2CValue(aLStack208,0x63b7c6e5a);
    uVar6 = lib::L2CValue::as_integer(aLStack80);
    uVar9 = lib::L2CValue::as_integer(aLStack208);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_1->moduleAccessor,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack80);
    FUN_710008b7a0(aLStack224,param_1);
    lua2cpp::L2CFighterBase::Vector2__length(param_1,(L2CValue)0x20);
    uVar6 = lib::L2CValue::operator<=(aLStack192,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack224);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::~L2CValue(aLStack192);
  }
  bVar1 = app::lua_bind::VisibilityModule__get_whole_impl(param_1->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar6 = lib::L2CValue::operator==(aLStack192,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack192);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::operator=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack192,0x1263f13241);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar10 = lib::L2CValue::as_hash(aLStack192);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl
            (param_1->moduleAccessor,iVar2,HVar10,-1);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar6 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xa3ddec741);
    lib::L2CValue::L2CValue(aLStack208,0x5ec462584);
    uVar6 = lib::L2CValue::as_integer(aLStack80);
    uVar9 = lib::L2CValue::as_integer(aLStack208);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_1->moduleAccessor,uVar6,uVar9);
    lib::L2CValue::L2CValue(aLStack192,fVar11);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack208,_MA_MSC_CMD_EFFECT_EFFECT);
    lib::L2CValue::L2CValue(aLStack256,0xfa06bb067);
    lib::L2CValue::L2CValue(aLStack272,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,0.0);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator+(aLStack192,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack400,0.0);
    lib::L2CValue::L2CValue(aLStack416,0.0);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    lib::L2CValue::L2CValue(aLStack448,0.0);
    lib::L2CValue::L2CValue(aLStack464,0.0);
    lib::L2CValue::L2CValue(aLStack480,false);
    FUN_710003b2c0(aLStack240,param_1,aLStack208,aLStack256,aLStack272,aLStack288,aLStack304,
                   aLStack320,aLStack336,aLStack352,aLStack368,aLStack384,aLStack80,aLStack400,
                   aLStack416,aLStack432,aLStack448,aLStack464,aLStack480);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack480);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack448);
    lib::L2CValue::~L2CValue(aLStack432);
    lib::L2CValue::~L2CValue(aLStack416);
    lib::L2CValue::~L2CValue(aLStack400);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack384);
    lib::L2CValue::~L2CValue(aLStack368);
    lib::L2CValue::~L2CValue(aLStack352);
    lib::L2CValue::~L2CValue(aLStack336);
    lib::L2CValue::~L2CValue(aLStack320);
    lib::L2CValue::~L2CValue(aLStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue(aLStack80,0x199c462b5d);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack496);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

