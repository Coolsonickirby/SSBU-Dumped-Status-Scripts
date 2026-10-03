
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000f410(L2CAgent *param_1)

{
  BattleObject **this;
  byte bVar1;
  uchar uVar2;
  int iVar3;
  ArticleOperationTarget AVar4;
  long lVar5;
  L2CValue *pLVar6;
  ulong uVar7;
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
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_INTERRUPT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(param_1->moduleAccessor,iVar3);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KOOPAJR_GENERATE_ARTICLE_REMAINCLOWN);
  lib::L2CValue::L2CValue(aLStack96,_ARTICLE_OPE_TARGET_ALL);
  lib::L2CValue::L2CValue(aLStack112,false);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  AVar4 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::ArticleModule__shoot_exist_impl
            (param_1->moduleAccessor,iVar3,AVar4,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  lib::L2CValue::L2CValue(aLStack96,_ATTACH_ITEM_GROUP_HIP);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ItemModule__set_attach_item_visibility_impl
            (param_1->moduleAccessor,(bool)(bVar1 & 1),uVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,true);
  lib::L2CValue::L2CValue(aLStack96,_ATTACH_ITEM_GROUP_BADGE);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ItemModule__set_attach_item_visibility_impl
            (param_1->moduleAccessor,(bool)(bVar1 & 1),uVar2);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_SPECIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_group_impl(param_1->moduleAccessor,iVar3)
  ;
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_TREAD_JUMP);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_group_impl(param_1->moduleAccessor,iVar3)
  ;
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_WALL_JUMP);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_group_impl(param_1->moduleAccessor,iVar3)
  ;
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_GROUP_CHK_AIR_JUMP_AERIAL);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__unable_transition_term_forbid_group_impl(param_1->moduleAccessor,iVar3)
  ;
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_INT_FORCE_DAMAGE_MOTION_KIND);
  lVar5 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(param_1->moduleAccessor,lVar5,iVar3);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  this = &param_1[2].battleObject;
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_GIMMICK_SPRING);
  uVar7 = lib::L2CValue::operator==(pLVar6,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_DAMAGE_FALL);
    uVar7 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xb);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_DOWN);
      uVar7 = lib::L2CValue::operator==(pLVar6,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) goto LAB_710000f910;
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_MA_MSC_EFFECT_REQUEST_FOLLOW);
  lib::L2CValue::L2CValue(aLStack96,0x12eea8635f);
  lib::L2CValue::L2CValue(aLStack112,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,4.0);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,1.0);
  lib::L2CValue::L2CValue(aLStack256,1);
  lib::L2CValue::L2CValue(aLStack272,0);
  lib::L2CValue::L2CValue(aLStack288,0);
  lib::L2CValue::L2CValue(aLStack304,0);
  lib::L2CAgent::clear_lua_stack(param_1);
  lib::L2CAgent::push_lua_stack(param_1,aLStack80);
  lib::L2CAgent::push_lua_stack(param_1,aLStack96);
  lib::L2CAgent::push_lua_stack(param_1,aLStack112);
  lib::L2CAgent::push_lua_stack(param_1,aLStack144);
  lib::L2CAgent::push_lua_stack(param_1,aLStack160);
  lib::L2CAgent::push_lua_stack(param_1,aLStack176);
  lib::L2CAgent::push_lua_stack(param_1,aLStack192);
  lib::L2CAgent::push_lua_stack(param_1,aLStack208);
  lib::L2CAgent::push_lua_stack(param_1,aLStack224);
  lib::L2CAgent::push_lua_stack(param_1,aLStack240);
  lib::L2CAgent::push_lua_stack(param_1,aLStack256);
  lib::L2CAgent::push_lua_stack(param_1,aLStack272);
  lib::L2CAgent::push_lua_stack(param_1,aLStack288);
  lib::L2CAgent::push_lua_stack(param_1,aLStack304);
  app::sv_module_access::effect(param_1->luaStateAgent);
  lib::L2CAgent::pop_lua_stack(param_1,1);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack304);
  lib::L2CValue::~L2CValue(aLStack288);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710000f910:
  lib::L2CValue::L2CValue(aLStack80,0x5e0bf9d48);
  lVar5 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__reset_status_default_int64_impl(param_1->moduleAccessor,lVar5);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xaefe46b4c);
  lVar5 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__reset_status_default_int64_impl(param_1->moduleAccessor,lVar5);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x5327cb690);
  lVar5 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::VisibilityModule__reset_status_default_int64_impl(param_1->moduleAccessor,lVar5);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

