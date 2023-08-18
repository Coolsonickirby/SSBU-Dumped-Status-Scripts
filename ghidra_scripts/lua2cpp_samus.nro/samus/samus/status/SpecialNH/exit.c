
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSamus::status::SpecialNH_exit(L2CFighterSamus *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  BattleObjectModuleAccessor *pBVar7;
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
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::operator_(aLStack96,pLVar4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_F);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) goto LAB_710000420c;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_E);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_C);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_7100003e4c;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_KIND_SPECIAL_N_JUMP_CANCEL);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_7100003e4c;
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_GUARD_ON);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_7100003e4c;
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_7100003e4c;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ESCAPE_F);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_7100003e4c;
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_B);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_7100003e4c;
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_GENERATE_ARTICLE_CSHOT);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar6);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_MA_MSC_EFFECT_REMOVE);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_module_access::effect(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    pLVar4 = aLStack80;
  }
  else {
LAB_7100003e4c:
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_GENERATE_ARTICLE_CSHOT);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    FUN_7100005770(aLStack144,this);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar5 & 1) == 0) goto LAB_710000420c;
    lib::L2CValue::L2CValue(aLStack80,0xaec2db62e);
    HVar6 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::EffectModule__req_common_impl(this->moduleAccessor,HVar6,0.0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,0xff0084ee1);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
    uVar2 = lib::L2CValue::as_integer(pLVar4);
    uVar2 = app::sv_battle_object::kind(uVar2);
    lib::L2CValue::L2CValue(aLStack144,uVar2);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_SAMUSD);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_KIND_KIRBY);
      uVar5 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
        iVar1 = lib::L2CValue::as_integer(aLStack176);
        iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
        lib::L2CValue::L2CValue(aLStack160,iVar1);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIND_SAMUSD);
        uVar5 = lib::L2CValue::operator__(aLStack160,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        if ((uVar5 & 1) != 0) goto LAB_7100003f6c;
      }
    }
    else {
LAB_7100003f6c:
      lib::L2CValue::L2CValue(aLStack80,0x107d2bbf54);
      lib::L2CValue::operator_(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack160,_MA_MSC_EFFECT_REQUEST_FOLLOW);
    lib::L2CValue::L2CValue(aLStack176,0x49bf3f6be);
    lib::L2CValue::L2CValue(aLStack192,7.98004);
    lib::L2CValue::L2CValue(aLStack208,-0.50584);
    lib::L2CValue::L2CValue(aLStack224,-0.25092);
    lib::L2CValue::L2CValue(aLStack240,-91.2728);
    lib::L2CValue::L2CValue(aLStack256,-1.7974);
    lib::L2CValue::L2CValue(aLStack272,176.373);
    lib::L2CValue::L2CValue(aLStack288,1.0);
    lib::L2CValue::L2CValue(aLStack304,false);
    lib::L2CValue::L2CValue(aLStack320,0);
    lib::L2CValue::L2CValue(aLStack336,0);
    lib::L2CValue::L2CValue(aLStack352,0);
    FUN_7100005870(aLStack80,this,aLStack160,aLStack128,aLStack176,aLStack192,aLStack208,aLStack224,
                   aLStack240,aLStack256,aLStack272,aLStack288,aLStack304,aLStack320,aLStack336,
                   aLStack352);
    lib::L2CValue::operator_(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX);
    iVar1 = lib::L2CValue::as_integer(aLStack112);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar4);
    app::FighterUtil::flash_eye_info(pBVar7);
    pLVar4 = aLStack144;
  }
  lib::L2CValue::_L2CValue(pLVar4);
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710000420c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

