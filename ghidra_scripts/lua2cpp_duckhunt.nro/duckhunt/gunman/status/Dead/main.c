
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponDuckhuntGunman::status::Dead_main(L2CWeaponDuckhuntGunman *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  L2CValue *this_00;
  BattleObjectModuleAccessor **ppBVar10;
  float fVar11;
  float fVar12;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x4ed254924);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  fVar11 = (float)lib::L2CValue::as_number(aLStack112);
  fVar12 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  ppBVar10 = &this->moduleAccessor;
  app::lua_bind::MotionModule__change_motion_impl
            (*ppBVar10,HVar5,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_INT_DAMAGE_FLY_BOUND_NUM);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_DEAD_DAMAGE_FLY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_KIND_HIGE);
  uVar6 = lib::L2CValue::operator__(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_KIND_NOPPO);
    uVar6 = lib::L2CValue::operator__(aLStack96,aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_KIND_KUROFUKU);
      uVar6 = lib::L2CValue::operator__(aLStack96,aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_KIND_SONBURERO);
        uVar6 = lib::L2CValue::operator__(aLStack96,aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_KIND_BOSS);
          uVar6 = lib::L2CValue::operator__(aLStack96,aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar6 & 1) == 0) goto LAB_710002d01c;
          lib::L2CValue::L2CValue(aLStack144,0xc80cb7cb2);
          lib::L2CValue::L2CValue(aLStack160,0x13ea46b4d3);
          uVar6 = lib::L2CValue::as_integer(aLStack144);
          uVar7 = lib::L2CValue::as_integer(aLStack160);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack96,fVar11);
          lib::L2CValue::operator_(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
          lib::L2CValue::L2CValue(aLStack144,0xbb625ff7a);
          lVar8 = lib::L2CValue::as_integer(aLStack96);
          lVar9 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar10,lVar8,lVar9);
        }
        else {
          lib::L2CValue::L2CValue(aLStack144,0xc80cb7cb2);
          lib::L2CValue::L2CValue(aLStack160,0x1841c5d291);
          uVar6 = lib::L2CValue::as_integer(aLStack144);
          uVar7 = lib::L2CValue::as_integer(aLStack160);
          fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack96,fVar11);
          lib::L2CValue::operator_(aLStack128,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
          lib::L2CValue::L2CValue(aLStack144,0xff1a20730);
          lVar8 = lib::L2CValue::as_integer(aLStack96);
          lVar9 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar10,lVar8,lVar9);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack144,0xc80cb7cb2);
        lib::L2CValue::L2CValue(aLStack160,0x1769b23874);
        uVar6 = lib::L2CValue::as_integer(aLStack144);
        uVar7 = lib::L2CValue::as_integer(aLStack160);
        fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack96,fVar11);
        lib::L2CValue::operator_(aLStack128,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_DEAD);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack144);
        if ((bVar2 & 1U) == 0) {
          lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
          lib::L2CValue::L2CValue(aLStack144,0xf63d0e7d1);
          lVar8 = lib::L2CValue::as_integer(aLStack96);
          lVar9 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar10,lVar8,lVar9);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_GENERATE_ARTICLE_KUROFUKUHAT);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::ArticleModule__generate_article_impl(*ppBVar10,iVar3,false,-1);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
          lib::L2CValue::L2CValue(aLStack144,0xffdb47272);
          lVar8 = lib::L2CValue::as_integer(aLStack96);
          lVar9 = lib::L2CValue::as_integer(aLStack144);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar10,lVar8,lVar9);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,0x17f5b725bd);
          HVar5 = lib::L2CValue::as_hash(aLStack96);
          iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar10,HVar5,true,false,false,false,0)
          ;
          lib::L2CValue::L2CValue(aLStack144,iVar3);
        }
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,0xc80cb7cb2);
      lib::L2CValue::L2CValue(aLStack160,0x14fca45605);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack96,fVar11);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_DEAD)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
        lib::L2CValue::L2CValue(aLStack144,0xc73f24197);
        lVar8 = lib::L2CValue::as_integer(aLStack96);
        lVar9 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar10,lVar8,lVar9);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
        lib::L2CValue::L2CValue(aLStack144,0xced96d434);
        lVar8 = lib::L2CValue::as_integer(aLStack96);
        lVar9 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar10,lVar8,lVar9);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0x1782b0152b);
        HVar5 = lib::L2CValue::as_hash(aLStack96);
        iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar10,HVar5,true,false,false,false,0);
        lib::L2CValue::L2CValue(aLStack144,iVar3);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,0xc80cb7cb2);
    lib::L2CValue::L2CValue(aLStack160,0x135b0c4a01);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar10,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack96,fVar11);
    lib::L2CValue::operator_(aLStack128,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
    lib::L2CValue::L2CValue(aLStack144,0xb5f2e36b6);
    lVar8 = lib::L2CValue::as_integer(aLStack96);
    lVar9 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar10,lVar8,lVar9);
  }
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710002d01c:
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_DEAD);
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar10,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack160);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0x176508382c);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar10,HVar5,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack160,iVar3);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,60.0);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::operator_(aLStack128,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  iVar4 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar10,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar10);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar6 = lib::L2CValue::operator__(aLStack176,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,false);
    FUN_710002fdd0(aLStack176,this,aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100031040);
  lib::L2CValue::operator_(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,Dead_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

