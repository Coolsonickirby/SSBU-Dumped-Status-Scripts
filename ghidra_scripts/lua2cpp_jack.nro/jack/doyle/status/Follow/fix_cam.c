
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponJackDoyle::status::Follow_fix_cam(L2CWeaponJackDoyle *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  BattleObjectModuleAccessor *pBVar10;
  Hash40 HVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  L2CValue *pLVar15;
  BattleObjectModuleAccessor **ppBVar16;
  float fVar17;
  float fVar18;
  float fVar19;
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
  undefined auStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined8 local_a0;
  undefined8 uStack152;
  
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_JACK_DOYLE_STATUS_FOLLOW_FLAG_CHANGE_MOTION);
  iVar6 = lib::L2CValue::as_integer(aLStack192);
  ppBVar16 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar6);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
  uVar8 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar8 & 1) == 0) goto LAB_7100034af8;
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_LINK_NO_ARTICLE);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  uVar7 = app::lua_bind::LinkModule__get_parent_id_impl(*ppBVar16,iVar6,true);
  lib::L2CValue::L2CValue(aLStack176,uVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  uVar7 = lib::L2CValue::as_integer(aLStack176);
  pvVar9 = (void *)app::sv_battle_object::module_accessor(uVar7);
  if (pvVar9 == (void *)0x0) {
    lib::L2CValue::L2CValue
              (aLStack192,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,pvVar9);
  }
  pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
  HVar11 = app::lua_bind::MotionModule__motion_kind_impl(pBVar10);
  lib::L2CValue::L2CValue(aLStack208,HVar11);
  HVar11 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar16);
  lib::L2CValue::L2CValue(aLStack224,HVar11);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_INT_FOLLOW_MOTION);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  lVar12 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar16,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)(auStack256 + 0x10),lVar12);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x7fb997a80);
  uVar8 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar8 & 1) == 0) {
LAB_7100033c70:
    lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,1.0);
    lib::L2CValue::L2CValue(aLStack288,false);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x11ca458285);
    uVar8 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar8 & 1) != 0) {
      FUN_7100035000(this);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x7fb997a80);
    uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack256 + 0x10),(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::operator_(aLStack208,(L2CValue *)(auStack256 + 0x10));
    }
    else {
      HVar11 = lib::L2CValue::as_hash(aLStack208);
      bVar1 = app::lua_bind::MotionModule__is_anim_resource_impl(*ppBVar16,HVar11);
      lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,false);
      uVar8 = lib::L2CValue::operator__(aLStack304,(L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue(aLStack304);
      if ((uVar8 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x47dee83e5);
        lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_a0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      }
      bVar1 = app::lua_bind::MotionModule__is_loop_flag_impl(*ppBVar16);
      lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
      uVar8 = lib::L2CValue::operator__(aLStack304,(L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      if ((uVar8 & 1) == 0) {
LAB_7100033ec0:
        lib::L2CValue::_L2CValue(aLStack304);
LAB_7100033ec8:
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
        fVar17 = (float)app::lua_bind::MotionModule__frame_impl(pBVar10);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar17);
        lib::L2CValue::operator_((L2CValue *)auStack256,(L2CValue *)&local_a0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x9eeaf3544);
        uVar8 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_a0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xb4fb275bd);
          uVar8 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_a0);
          lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x9fece0d5d);
            uVar8 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_a0);
            lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
            if ((uVar8 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x35076a4c0);
              uVar8 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_a0);
              lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
              if ((uVar8 & 1) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x167d4bd539);
                uVar8 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_a0);
                lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
                if ((uVar8 & 1) == 0) {
                  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x167a261120);
                  uVar8 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_a0);
                  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
                  if ((uVar8 & 1) == 0) {
                    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
                    fVar17 = (float)app::lua_bind::MotionModule__rate_impl(pBVar10);
                    lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar17);
                    lib::L2CValue::operator_(aLStack272,(L2CValue *)&local_a0);
                    goto LAB_7100033e94;
                  }
                }
              }
            }
          }
        }
      }
      else {
        HVar11 = lib::L2CValue::as_hash(aLStack224);
        HVar11 = app::lua_bind::MotionModule__resource_id_impl(*ppBVar16,HVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,HVar11);
        HVar11 = lib::L2CValue::as_hash(aLStack208);
        HVar11 = app::lua_bind::MotionModule__resource_id_impl(*ppBVar16,HVar11);
        lib::L2CValue::L2CValue(aLStack320,HVar11);
        uVar8 = lib::L2CValue::operator__((L2CValue *)&local_a0,aLStack320);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::_L2CValue(aLStack320);
          lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
          goto LAB_7100033ec0;
        }
        HVar11 = lib::L2CValue::as_hash(aLStack224);
        HVar11 = app::lua_bind::MotionModule__animcmd_name_hash_impl(*ppBVar16,HVar11);
        lib::L2CValue::L2CValue(aLStack336,HVar11);
        HVar11 = lib::L2CValue::as_hash(aLStack208);
        HVar11 = app::lua_bind::MotionModule__animcmd_name_hash_impl(*ppBVar16,HVar11);
        lib::L2CValue::L2CValue(aLStack352,HVar11);
        uVar8 = lib::L2CValue::operator__(aLStack336,aLStack352);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
        lib::L2CValue::_L2CValue(aLStack304);
        if ((uVar8 & 1) == 0) goto LAB_7100033ec8;
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
        lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_a0);
LAB_7100033e94:
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
    uVar8 = lib::L2CValue::operator__(aLStack288,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,false);
      HVar11 = lib::L2CValue::as_hash(aLStack208);
      fVar17 = (float)lib::L2CValue::as_number((L2CValue *)auStack256);
      fVar18 = (float)lib::L2CValue::as_number(aLStack272);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_a0);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar16,HVar11,fVar17,fVar18,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    }
    else {
      HVar11 = lib::L2CValue::as_hash(aLStack208);
      app::lua_bind::MotionModule__change_motion_kind_impl(*ppBVar16,HVar11);
    }
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x7fb997a80);
    uVar8 = lib::L2CValue::operator__((L2CValue *)(auStack256 + 0x10),(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar8 & 1) == 0) goto LAB_7100033c70;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_JACK_DOYLE_STATUS_FOLLOW_FLAG_CHANGE_MOTION)
  ;
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar16,iVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_FLAG_FOLLOW_DAMAGE);
  iVar6 = lib::L2CValue::as_integer(aLStack272);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
  uVar8 = lib::L2CValue::operator__((L2CValue *)auStack256,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue
              (aLStack272,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_FLAG_FOLLOW_DAMAGE_VANISH);
    iVar6 = lib::L2CValue::as_integer(aLStack272);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar6);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack256,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack272,_WEAPON_JACK_DOYLE_MOTION_PART_SET_KIND_MATERIAL);
      iVar6 = lib::L2CValue::as_integer(aLStack272);
      HVar11 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar16,iVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack256,HVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xd0095ba51);
      uVar8 = lib::L2CValue::operator__((L2CValue *)auStack256,(L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_a0,_WEAPON_JACK_DOYLE_MOTION_PART_SET_KIND_MATERIAL);
        lib::L2CValue::L2CValue((L2CValue *)auStack256,0xd0095ba51);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CValue::L2CValue(aLStack288,1.0);
        lib::L2CValue::L2CValue(aLStack304,false);
        lib::L2CValue::L2CValue(aLStack320,false);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CValue::L2CValue(aLStack352,false);
        lib::L2CValue::L2CValue(aLStack368,false);
        lib::L2CValue::L2CValue(aLStack384,false);
        iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
        HVar11 = lib::L2CValue::as_hash((L2CValue *)auStack256);
        fVar17 = (float)lib::L2CValue::as_number(aLStack272);
        fVar18 = (float)lib::L2CValue::as_number(aLStack288);
        bVar1 = lib::L2CValue::as_bool(aLStack304);
        bVar2 = lib::L2CValue::as_bool(aLStack320);
        fVar19 = (float)lib::L2CValue::as_number(aLStack336);
        bVar3 = lib::L2CValue::as_bool(aLStack352);
        bVar4 = lib::L2CValue::as_bool(aLStack368);
        bVar5 = lib::L2CValue::as_bool(aLStack384);
        app::lua_bind::MotionModule__add_motion_partial_impl
                  (*ppBVar16,iVar6,HVar11,fVar17,fVar18,(bool)(bVar1 & 1),(bool)(bVar2 & 1),fVar19,
                   (bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue((L2CValue *)auStack256);
        lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
        pLVar15 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
        pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar15);
        app::WeaponSpecializer_JackDoyle::update_aura_visible(pBVar10);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_a0,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_FLAG_FOLLOW_DAMAGE_VANISH
                );
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar16,iVar6);
      puVar14 = &local_a0;
      goto LAB_7100034984;
    }
  }
  else {
    pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
    iVar6 = app::lua_bind::StopModule__get_hit_stop_real_frame_impl(pBVar10);
    lib::L2CValue::L2CValue(aLStack288,iVar6);
    lib::L2CValue::L2CValue(aLStack320,0xbde6a845b);
    lib::L2CValue::L2CValue(aLStack336,0x12ee934117);
    uVar8 = lib::L2CValue::as_integer(aLStack320);
    uVar13 = lib::L2CValue::as_integer(aLStack336);
    fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar8,uVar13);
    lib::L2CValue::L2CValue(aLStack304,fVar17);
    lib::L2CValue::operator_(aLStack288,aLStack304);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.01);
    puVar14 = &local_a0;
    lib::L2CValue::operator_(aLStack272,(L2CValue *)puVar14);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CAgent::math_toint((L2CAgent *)auStack256,(L2CValue *)puVar14);
    lib::L2CValue::operator_((L2CValue *)auStack256,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,1.0);
    uVar8 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)auStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_a0,_FIGHTER_INSTANCE_WORK_ID_FLOAT_DAMAGE_REACTION_FRAME);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack192);
      fVar17 = (float)app::lua_bind::WorkModule__get_float_impl(pBVar10,iVar6);
      lib::L2CValue::L2CValue(aLStack272,fVar17);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue(aLStack288);
      lib::L2CValue::L2CValue(aLStack304,0xbde6a845b);
      lib::L2CValue::L2CValue(aLStack320,0x21a5bbfb74);
      uVar8 = lib::L2CValue::as_integer(aLStack304);
      uVar13 = lib::L2CValue::as_integer(aLStack320);
      fVar17 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar16,uVar8,uVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar17);
      uVar8 = lib::L2CValue::operator__(aLStack272,(L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xc6b29d331);
        lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_a0);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1267b6137b);
        lib::L2CValue::operator_(aLStack288,(L2CValue *)&local_a0);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_a0,_WEAPON_JACK_DOYLE_MOTION_PART_SET_KIND_MATERIAL);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,1.0);
      lib::L2CValue::L2CValue(aLStack336,false);
      lib::L2CValue::L2CValue(aLStack352,false);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CValue::L2CValue(aLStack384,false);
      lib::L2CValue::L2CValue(aLStack400,false);
      lib::L2CValue::L2CValue(aLStack416,false);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      HVar11 = lib::L2CValue::as_hash(aLStack288);
      fVar17 = (float)lib::L2CValue::as_number(aLStack304);
      fVar18 = (float)lib::L2CValue::as_number(aLStack320);
      bVar1 = lib::L2CValue::as_bool(aLStack336);
      bVar2 = lib::L2CValue::as_bool(aLStack352);
      fVar19 = (float)lib::L2CValue::as_number(aLStack368);
      bVar3 = lib::L2CValue::as_bool(aLStack384);
      bVar4 = lib::L2CValue::as_bool(aLStack400);
      bVar5 = lib::L2CValue::as_bool(aLStack416);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (*ppBVar16,iVar6,HVar11,fVar17,fVar18,(bool)(bVar1 & 1),(bool)(bVar2 & 1),fVar19,
                 (bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1));
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_a0,_WEAPON_JACK_DOYLE_MOTION_PART_SET_KIND_MATERIAL);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      uVar7 = app::lua_bind::MotionModule__end_frame_partial_impl(*ppBVar16,iVar6);
      lib::L2CValue::L2CValue(aLStack304,uVar7);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::operator_(aLStack304,(L2CValue *)auStack256);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.001);
      lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_a0,_WEAPON_JACK_DOYLE_MOTION_PART_SET_KIND_MATERIAL);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      fVar17 = (float)lib::L2CValue::as_number(aLStack320);
      app::lua_bind::MotionModule__set_rate_partial_impl(*ppBVar16,iVar6,fVar17);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::L2CValue(aLStack336);
      lib::L2CValue::L2CValue(aLStack368,_LINK_NO_ARTICLE);
      iVar6 = lib::L2CValue::as_integer(aLStack368);
      iVar6 = app::lua_bind::LinkModule__get_parent_situation_kind_impl(*ppBVar16,iVar6);
      lib::L2CValue::L2CValue(aLStack352,iVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,_SITUATION_KIND_GROUND);
      uVar8 = lib::L2CValue::operator__(aLStack352,(L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack368);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xa82dd1262);
        lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_a0);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xdb4059b7b);
        lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_a0);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      HVar11 = lib::L2CValue::as_hash(aLStack336);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)auStack256);
      uStack152 = _FIGHTER_STATUS_ATTACK_AIR_WORK_INT_FRAME;
      local_a0 = FIGHTER_COMMAND_ATTACK_AIR_KIND_LW;
      app::lua_bind::ShakeModule__req_impl
                (*ppBVar16,HVar11,iVar6,false,(Vector2f *)&local_a0,1.0,0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_FLAG_FOLLOW_DAMAGE);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar16,iVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    puVar14 = (undefined8 *)auStack256;
LAB_7100034984:
    lib::L2CValue::_L2CValue((L2CValue *)puVar14);
  }
  lib::L2CValue::L2CValue(aLStack272,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_FLAG_FOLLOW_VANISH_CANCEL);
  iVar6 = lib::L2CValue::as_integer(aLStack272);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar16,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
  uVar8 = lib::L2CValue::operator__((L2CValue *)auStack256,(L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack272,_WEAPON_JACK_DOYLE_MOTION_PART_SET_KIND_MATERIAL);
    iVar6 = lib::L2CValue::as_integer(aLStack272);
    HVar11 = app::lua_bind::MotionModule__motion_kind_partial_impl(*ppBVar16,iVar6);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,HVar11);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xd0095ba51);
    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack256,(L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_a0,_WEAPON_JACK_DOYLE_MOTION_PART_SET_KIND_MATERIAL);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      app::lua_bind::MotionModule__remove_motion_partial_impl(*ppBVar16,iVar6,false);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
      pLVar15 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar15);
      app::WeaponSpecializer_JackDoyle::update_aura_visible(pBVar10);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_a0,_WEAPON_JACK_DOYLE_INSTANCE_WORK_ID_FLAG_FOLLOW_VANISH_CANCEL
                );
      iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar16,iVar6);
      lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    }
  }
  lib::L2CValue::_L2CValue((L2CValue *)(auStack256 + 0x10));
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
LAB_7100034af8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

