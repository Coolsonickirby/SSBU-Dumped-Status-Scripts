
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPitb::status::FinalAttack_main(L2CFighterPitb *this,L2CValue *return_value)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  Hash40 HVar10;
  undefined8 uVar11;
  void *pvVar12;
  Article *pAVar13;
  Hash40 HVar14;
  Vector3f VVar15;
  BattleObjectModuleAccessor **ppBVar16;
  float fVar17;
  float fVar18;
  long lVar19;
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
  ulong local_80;
  ulong uStack120;
  
  lib::L2CValue::L2CValue(aLStack208,_EFFECT_SUB_ATTRIBUTE_EMIT);
  uVar2 = lib::L2CValue::as_integer(aLStack208);
  ppBVar16 = &this->moduleAccessor;
  app::lua_bind::EffectModule__remove_all_impl(*ppBVar16,uVar2,0);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,false);
  bVar1 = lib::L2CValue::as_bool(aLStack208);
  app::lua_bind::AreaModule__set_whole_impl(*ppBVar16,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,0x1e61567377);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,false);
  bVar1 = lib::L2CValue::as_bool(aLStack208);
  app::lua_bind::VisibilityModule__set_whole_impl(*ppBVar16,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__on_flag_impl(*ppBVar16,iVar3);
  lib::L2CValue::_L2CValue(aLStack208);
  pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(*ppBVar16);
  lib::L2CValue::L2CValue(aLStack208,*pfVar5);
  lib::L2CValue::L2CValue(aLStack192,pfVar5[1]);
  lib::L2CValue::L2CValue(aLStack176,pfVar5[2]);
  FUN_7100003320(aLStack160,this,aLStack208);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PIT_STATUS_FINAL_FLOAT_POS_X);
  fVar17 = (float)lib::L2CValue::as_number(pLVar6);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar16,fVar17,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PIT_STATUS_FINAL_FLOAT_POS_Y);
  fVar17 = (float)lib::L2CValue::as_number(pLVar6);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar16,fVar17,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PIT_STATUS_FINAL_FLAG_GROUND);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar16,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  }
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PIT_STATUS_FINAL_FLOAT_ATTACK_X);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar17 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar16,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar17);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PIT_STATUS_FINAL_FLOAT_ATTACK_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar17 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar16,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar17);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack224);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  uVar7 = lib::L2CValue::as_number(pLVar6);
  lVar19 = lib::L2CValue::as_number(pLVar8);
  uVar2 = lib::L2CValue::as_number(pLVar9);
  local_80 = uVar7 & 0xffffffff | lVar19 << 0x20;
  uStack120 = (ulong)uVar2;
  app::lua_bind::PostureModule__init_pos_impl(*ppBVar16,(Vector3f *)&local_80,true,true);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0xcb7cea62c);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,1.0);
  lib::L2CValue::L2CValue(aLStack256,false);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_80);
  fVar17 = (float)lib::L2CValue::as_number(aLStack224);
  fVar18 = (float)lib::L2CValue::as_number(aLStack240);
  bVar1 = lib::L2CValue::as_bool(aLStack256);
  VVar15 = (Vector3f)(bVar1 & 1);
  app::lua_bind::MotionModule__change_motion_impl
            (*ppBVar16,HVar10,fVar17,fVar18,(bool)VVar15,0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PIT_GENERATE_ARTICLE_CHARIOT);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  lib::L2CValue::as_number(pLVar6);
  lib::L2CValue::as_number(pLVar8);
  lib::L2CValue::as_number(pLVar9);
  app::lua_bind::ArticleModule__set_pos_impl(*ppBVar16,iVar3,VVar15);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PIT_GENERATE_ARTICLE_CHARIOT);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_PIT_CHARIOT_STATUS_KIND_FINAL_ATTACK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar11 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::ArticleModule__change_status_impl(*ppBVar16,iVar3,(int)uVar11,0);
  VVar15 = SUB81(uVar11,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PIT_GENERATE_ARTICLE_HORSE_L);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  lib::L2CValue::as_number(pLVar6);
  lib::L2CValue::as_number(pLVar8);
  lib::L2CValue::as_number(pLVar9);
  app::lua_bind::ArticleModule__set_pos_impl(*ppBVar16,iVar3,VVar15);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PIT_GENERATE_ARTICLE_HORSE_L);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_PIT_HORSE_STATUS_KIND_FINAL_ATTACK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  uVar11 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::ArticleModule__change_status_impl(*ppBVar16,iVar3,(int)uVar11,0);
  VVar15 = SUB81(uVar11,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PIT_GENERATE_ARTICLE_HORSE_R);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  lib::L2CValue::as_number(pLVar6);
  lib::L2CValue::as_number(pLVar8);
  lib::L2CValue::as_number(pLVar9);
  app::lua_bind::ArticleModule__set_pos_impl(*ppBVar16,iVar3,VVar15);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_PIT_GENERATE_ARTICLE_HORSE_R);
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_PIT_HORSE_STATUS_KIND_FINAL_ATTACK);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  iVar4 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::ArticleModule__change_status_impl(*ppBVar16,iVar3,iVar4,0);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PIT_GENERATE_ARTICLE_CHARIOT);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  pvVar12 = (void *)app::lua_bind::ArticleModule__get_article_impl(*ppBVar16,iVar3);
  if (pvVar12 == (void *)0x0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_80,pvVar12);
  }
  lib::L2CValue::_L2CValue(aLStack224);
  pAVar13 = (Article *)lib::L2CValue::as_pointer((L2CValue *)&local_80);
  uVar2 = app::lua_bind::Article__get_battle_object_id_impl(pAVar13);
  lib::L2CValue::L2CValue(aLStack224,uVar2);
  lib::L2CValue::L2CValue(aLStack256,_LINK_NO_CONSTRAINT);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  uVar2 = lib::L2CValue::as_integer(aLStack224);
  bVar1 = app::lua_bind::LinkModule__link_impl(*ppBVar16,iVar3,uVar2);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,_LINK_NO_CONSTRAINT);
  lib::L2CValue::L2CValue(aLStack272,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack288,0x9c922e90e);
  lib::L2CValue::L2CValue
            (aLStack304,
             _CONSTRAINT_FLAG_ORIENTATION | CONSTRAINT_FLAG_POSITION |
             _CONSTRAINT_FLAG_NO_UPDATE_LINK_POS);
  iVar3 = lib::L2CValue::as_integer(aLStack256);
  HVar10 = lib::L2CValue::as_hash(aLStack272);
  HVar14 = lib::L2CValue::as_hash(aLStack288);
  uVar2 = lib::L2CValue::as_integer(aLStack304);
  app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
            (*ppBVar16,iVar3,HVar10,HVar14,uVar2,true);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,FinalAttack_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

