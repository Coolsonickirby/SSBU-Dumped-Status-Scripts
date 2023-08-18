
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponDuckhuntGunman::status::Ready_main(void *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  L2CValue *this_00;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
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
  
  ppBVar9 = (BattleObjectModuleAccessor **)((long)this + 0x40);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,fVar10);
  lib::L2CValue::L2CValue(aLStack96,-1.0);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,0x776bcbc68);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    fVar11 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar9,HVar5,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0x78cb3810b);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    fVar11 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar9,HVar5,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_KIND_HIGE);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_KIND_NOPPO);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_KIND_KUROFUKU);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_KIND_SONBURERO);
        uVar4 = lib::L2CValue::operator__(aLStack96,aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_GUNMAN_KIND_BOSS);
          uVar4 = lib::L2CValue::operator__(aLStack96,aLStack128);
          lib::L2CValue::_L2CValue(aLStack96);
          if ((uVar4 & 1) == 0) goto LAB_710002b188;
          lib::L2CValue::L2CValue(aLStack160,0xc80cb7cb2);
          lib::L2CValue::L2CValue(aLStack176,0x1228e10caa);
          uVar4 = lib::L2CValue::as_integer(aLStack160);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar6);
          lib::L2CValue::L2CValue(aLStack96,fVar10);
          lib::L2CValue::operator_(aLStack144,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
          lib::L2CValue::L2CValue(aLStack160,0xb582b9e56);
          lVar7 = lib::L2CValue::as_integer(aLStack96);
          lVar8 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar9,lVar7,lVar8);
        }
        else {
          lib::L2CValue::L2CValue(aLStack160,0xc80cb7cb2);
          lib::L2CValue::L2CValue(aLStack176,0x17483ac873);
          uVar4 = lib::L2CValue::as_integer(aLStack160);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar6);
          lib::L2CValue::L2CValue(aLStack96,fVar10);
          lib::L2CValue::operator_(aLStack144,aLStack96);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack176);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
          lib::L2CValue::L2CValue(aLStack160,0xf30c40459);
          lVar7 = lib::L2CValue::as_integer(aLStack96);
          lVar8 = lib::L2CValue::as_integer(aLStack160);
          app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar9,lVar7,lVar8);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,0xc80cb7cb2);
        lib::L2CValue::L2CValue(aLStack176,0x1620e4f178);
        uVar4 = lib::L2CValue::as_integer(aLStack160);
        uVar6 = lib::L2CValue::as_integer(aLStack176);
        fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar6);
        lib::L2CValue::L2CValue(aLStack96,fVar10);
        lib::L2CValue::operator_(aLStack144,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
        lib::L2CValue::L2CValue(aLStack160,0xf8dde86fd);
        lVar7 = lib::L2CValue::as_integer(aLStack96);
        lVar8 = lib::L2CValue::as_integer(aLStack160);
        app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar9,lVar7,lVar8);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,0xc80cb7cb2);
      lib::L2CValue::L2CValue(aLStack176,0x13d5bf3825);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack96,fVar10);
      lib::L2CValue::operator_(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
      lib::L2CValue::L2CValue(aLStack160,0xc9dfc20bb);
      lVar7 = lib::L2CValue::as_integer(aLStack96);
      lVar8 = lib::L2CValue::as_integer(aLStack160);
      app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar9,lVar7,lVar8);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,0xc80cb7cb2);
    lib::L2CValue::L2CValue(aLStack176,0x1299abf278);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar6);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::operator_(aLStack144,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack96,0x4bf28cd64);
    lib::L2CValue::L2CValue(aLStack160,0xbb120579a);
    lVar7 = lib::L2CValue::as_integer(aLStack96);
    lVar8 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::VisibilityModule__set_int64_impl(*ppBVar9,lVar7,lVar8);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710002b188:
  lib::L2CValue::L2CValue(aLStack160,aLStack128);
  FUN_710002f270(this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack224,0xc80cb7cb2);
  lib::L2CValue::L2CValue(aLStack240,0xe2b8a17e8);
  uVar4 = lib::L2CValue::as_integer(aLStack224);
  uVar6 = lib::L2CValue::as_integer(aLStack240);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar10);
  lib::L2CValue::L2CValue(aLStack96,60.0);
  lib::L2CValue::operator_(aLStack208,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::operator_(aLStack144,aLStack192);
  lib::L2CValue::operator_(aLStack144,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue(aLStack192,0xc80cb7cb2);
  lib::L2CValue::L2CValue(aLStack208,0xcd30bdd33);
  uVar4 = lib::L2CValue::as_integer(aLStack192);
  uVar6 = lib::L2CValue::as_integer(aLStack208);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack176,fVar10);
  lib::L2CValue::operator_(aLStack144,aLStack176);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_INIT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar4 = lib::L2CValue::operator__(aLStack176,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,false);
    FUN_71000321e0(aLStack176,this,aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)((long)this + 200),0x15);
  lib::L2CValue::L2CValue(aLStack96,&DAT_7100032fb0);
  lib::L2CValue::operator_(this_00,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::HitModule__sleep_impl(*ppBVar9,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_EFFECT_HANDLE_NULL);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_DUCKHUNT_GUNMAN_INSTANCE_WORK_ID_RAY_EFFECT_HANDLE_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar9,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,Ready_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

