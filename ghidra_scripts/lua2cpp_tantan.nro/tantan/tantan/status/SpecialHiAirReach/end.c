
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::SpecialHiAirReach_end(L2CFighterTantan *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  Article *pAVar6;
  Hash40 HVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,false);
  FUN_7100027640(this,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  pvVar4 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar2);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,pvVar4);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  uVar5 = lib::L2CValue::operator__
                    (aLStack80,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
  if ((uVar5 & 1) == 0) {
    pAVar6 = (Article *)lib::L2CValue::as_pointer(aLStack80);
    uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar6);
    lib::L2CValue::L2CValue(aLStack112,uVar3);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar4 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack96,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar4);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,0x12eeb17698);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    uVar3 = app::lua_bind::MotionModule__end_frame_from_hash_impl(pBVar8,HVar7);
    lib::L2CValue::L2CValue(aLStack128,uVar3);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_TANTAN_GENERATE_ARTICLE_SPIRALLEFT);
    lib::L2CValue::L2CValue(aLStack160,false);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    HVar7 = lib::L2CValue::as_hash(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    fVar9 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::ArticleModule__change_motion_impl
              (this->moduleAccessor,iVar2,HVar7,(bool)(bVar1 & 1),fVar9);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_71000278f0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

