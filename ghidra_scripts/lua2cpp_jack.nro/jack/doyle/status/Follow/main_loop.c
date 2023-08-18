
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponJackDoyle::status::Follow_main_loop(L2CWeaponJackDoyle *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Hash40 HVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  long lVar8;
  ulong uVar9;
  L2CValue *pLVar10;
  BattleObjectModuleAccessor **ppBVar11;
  float fVar12;
  float fVar13;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  ppBVar11 = &this->moduleAccessor;
  HVar4 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack112,HVar4);
  lib::L2CValue::L2CValue(aLStack96,0x4fb50df0c);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x11ca458285);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      FUN_7100035000(this);
      goto LAB_7100038614;
    }
    lib::L2CValue::L2CValue(aLStack96,0xcfb292648);
    uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100038614;
    lib::L2CValue::L2CValue(aLStack96,_LINK_NO_ARTICLE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    HVar4 = app::lua_bind::LinkModule__get_parent_motion_kind_impl(*ppBVar11,iVar2);
    lib::L2CValue::L2CValue(aLStack128,HVar4);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xbca3f3207);
    uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_LINK_NO_ARTICLE);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      fVar12 = (float)app::lua_bind::LinkModule__get_parent_motion_frame_impl(*ppBVar11,iVar2);
      lib::L2CValue::L2CValue(aLStack96,fVar12);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar4 = lib::L2CValue::as_hash(aLStack128);
      fVar12 = (float)lib::L2CValue::as_number(aLStack96);
      fVar13 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar11,HVar4,fVar12,fVar13,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar10 = aLStack96;
      goto LAB_7100038608;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_LINK_NO_ARTICLE);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    uVar3 = app::lua_bind::LinkModule__get_parent_id_impl(*ppBVar11,iVar2,true);
    lib::L2CValue::L2CValue(aLStack128,uVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar3);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack144,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
    HVar4 = app::lua_bind::MotionModule__motion_kind_2nd_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack160,HVar4);
    HVar4 = app::lua_bind::MotionModule__motion_kind_2nd_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack176,HVar4);
    lib::L2CValue::L2CValue(aLStack96,0xeb45f04ee);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xeb332c0f7);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,0x6659f2809);
        lib::L2CValue::operator_(aLStack160,aLStack96);
        goto LAB_7100038468;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x662f2ec10);
      lib::L2CValue::operator_(aLStack160,aLStack96);
LAB_7100038468:
      lib::L2CValue::_L2CValue(aLStack96);
    }
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack176);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
      uVar5 = lib::L2CValue::operator__(aLStack176,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,1.0);
        fVar12 = (float)lib::L2CValue::as_number(aLStack96);
        app::lua_bind::MotionModule__set_weight_impl(*ppBVar11,fVar12,true);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        fVar12 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar11);
        lib::L2CValue::L2CValue(aLStack96,fVar12);
        lib::L2CValue::L2CValue(aLStack192,1.0);
        lib::L2CValue::L2CValue(aLStack208,true);
        HVar4 = lib::L2CValue::as_hash(aLStack160);
        fVar12 = (float)lib::L2CValue::as_number(aLStack96);
        fVar13 = (float)lib::L2CValue::as_number(aLStack192);
        bVar1 = lib::L2CValue::as_bool(aLStack208);
        app::lua_bind::MotionModule__add_motion_2nd_impl
                  (*ppBVar11,HVar4,fVar12,fVar13,(bool)(bVar1 & 1),1.0);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
    lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      fVar12 = (float)app::lua_bind::MotionModule__weight_impl(pBVar7);
      lib::L2CValue::L2CValue(aLStack96,fVar12);
      fVar12 = (float)lib::L2CValue::as_number(aLStack96);
      app::lua_bind::MotionModule__set_weight_impl(*ppBVar11,fVar12,true);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar10 = aLStack144;
LAB_7100038608:
    lib::L2CValue::_L2CValue(pLVar10);
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_7100038614:
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_INT_FOLLOW_MOTION);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  lVar8 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar2);
  lib::L2CValue::L2CValue(aLStack128,lVar8);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
  uVar5 = lib::L2CValue::operator__(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if (((uVar5 & 1) == 0) &&
     (uVar5 = lib::L2CValue::operator__(aLStack112,aLStack128), (uVar5 & 1) != 0)) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_INT_FOLLOW_MOTION);
      lVar8 = lib::L2CValue::as_integer(aLStack96);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar11,lVar8,iVar2);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_JACK_DOYLE_STATUS_FOLLOW_FLAG_CHANGE_MOTION);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar2);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_JACK_DOYLE_STATUS_FOLLOW_FLAG_VANISH_END);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar2);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_JACK_DOYLE_MOTION_PART_SET_KIND_MATERIAL);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    HVar4 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar11,iVar2);
    lib::L2CValue::L2CValue(aLStack144,HVar4);
    lib::L2CValue::L2CValue(aLStack96,0xd0095ba51);
    uVar5 = lib::L2CValue::operator__(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_JACK_DOYLE_STATUS_FOLLOW_FLAG_VANISH_END);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar2);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_LINK_NO_ARTICLE);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      uVar3 = app::lua_bind::LinkModule__get_parent_id_impl(*ppBVar11,iVar2,true);
      lib::L2CValue::L2CValue(aLStack96,uVar3);
      lib::L2CValue::_L2CValue(aLStack144);
      uVar3 = lib::L2CValue::as_integer(aLStack96);
      pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar3);
      if (pvVar6 == (void *)0x0) {
        lib::L2CValue::L2CValue
                  (aLStack144,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,pvVar6);
      }
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INSTANCE_WORK_ID_FLOAT_DAMAGE_REACTION_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack176);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack144);
      fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar7,iVar2);
      lib::L2CValue::L2CValue(aLStack160,fVar12);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack192,0xbde6a845b);
      lib::L2CValue::L2CValue(aLStack208,0x1c03cbfc28);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      uVar9 = lib::L2CValue::as_integer(aLStack208);
      fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar11,uVar5,uVar9);
      lib::L2CValue::L2CValue(aLStack176,fVar12);
      uVar5 = lib::L2CValue::operator__(aLStack160,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,_WEAPON_JACK_DOYLE_MOTION_PART_SET_KIND_MATERIAL);
        iVar2 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar11,iVar2,false);
        lib::L2CValue::_L2CValue(aLStack176);
        pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar10);
        app::WeaponSpecializer_JackDoyle::update_aura_visible(pBVar7);
        lib::L2CValue::L2CValue(aLStack176,_WEAPON_JACK_DOYLE_STATUS_FOLLOW_FLAG_VANISH_END);
        iVar2 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar2);
        lib::L2CValue::_L2CValue(aLStack176);
      }
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

