
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::SuperSpecial2Blow_main(L2CFighterDolly *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  HitStatus HVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  code *pcVar10;
  long *plVar11;
  Hash40 HVar12;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL2_WORK_INT_TARGET_OBJECT_CATEGORY);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,BATTLE_OBJECT_CATEGORY_INVALID);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) != 0) goto LAB_710000f71c;
  lib::L2CValue::L2CValue(aLStack128,aLStack96);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL2_WORK_INT_TARGET_OBJECT_ID)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_FIGHTER);
  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_ENEMY);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) != 0) goto LAB_710000f6d4;
    lib::L2CValue::L2CValue(aLStack80,_BATTLE_OBJECT_CATEGORY_ITEM);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,false);
    }
    else {
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::sv_item::is_captured(uVar6);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    }
  }
  else {
LAB_710000f6d4:
    lib::L2CValue::L2CValue(aLStack112,true);
  }
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar1 & 1U) != 0) {
    app::lua_bind::CatchModule__set_catch_impl(this->moduleAccessor,0x50000000);
  }
LAB_710000f71c:
  lib::L2CValue::L2CValue(aLStack112,0x14836fd13a);
  lib::L2CValue::L2CValue(aLStack160,0x164cc83f97);
  uVar7 = lib::L2CValue::as_integer(aLStack112);
  uVar8 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack176,false);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar2 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::StopModule__set_hit_stop_frame_impl(this->moduleAccessor,iVar3,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  app::LinkEventThrow::new_l2c_table();
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x105a79305b);
  lib::L2CValue::L2CValue(aLStack80,0x1a72289a8e);
  lib::L2CValue::operator_(pLVar9,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0xc3e3c1ede);
  lib::L2CValue::L2CValue(aLStack80,0x7fb997a80);
  lib::L2CValue::operator_(pLVar9,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack176,LINK_NO_CAPTURE);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x11f63699bf);
  pcVar10 = (code *)lib::L2CValue::as_pointer(pLVar9);
  plVar11 = (long *)(*pcVar10)();
  app::lua_bind::LinkEvent__load_from_l2c_table_impl((LinkEvent *)plVar11,aLStack112);
  app::lua_bind::LinkModule__send_event_nodes_struct_impl
            (this->moduleAccessor,iVar3,(LinkEvent *)plVar11,0);
  app::lua_bind::LinkEvent__store_l2c_table_impl((LinkEvent *)plVar11);
  lib::L2CValue::L2CValue(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  (**(code **)(*plVar11 + 8))(plVar11);
  lib::L2CValue::operator_(aLStack112,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0xa5f8ae909);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL2_WORK_INT_TARGET_HIT_GROUP);
  iVar3 = lib::L2CValue::as_integer(pLVar9);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x7ce0a07b2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_STATUS_SUPER_SPECIAL2_WORK_INT_TARGET_HIT_NO);
  iVar3 = lib::L2CValue::as_integer(pLVar9);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_HIT_STATUS_XLU);
  HVar5 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar5,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar2 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar2 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DOLLY_GENERATE_ARTICLE_FIRE);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_DOLLY_FIRE_STATUS_KIND_HIT);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack160,0x194c1c83d0);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  HVar12 = lib::L2CValue::as_hash(aLStack160);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar3,HVar12,-1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack160,0x1d086d8c10);
  HVar12 = lib::L2CValue::as_hash(aLStack160);
  iVar3 = app::lua_bind::SoundModule__play_se_impl
                    (this->moduleAccessor,HVar12,true,false,false,false,0);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,SuperSpecial2Blow_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

