
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::Demo_main_loop(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  Hash40 HVar8;
  ulong *this_00;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong auStack160 [2];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_ROSETTA_TICO_STATUS_DEMO_WORK_FLAG_SETUP);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)auStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar6 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)auStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_MENU_MODE);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar6 = lib::L2CValue::operator__((L2CValue *)auStack160,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue(aLStack192,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_X);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack176,fVar10);
      lib::L2CValue::operator_(aLStack176,aLStack112);
      lib::L2CValue::L2CValue(aLStack240,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_Y);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack224,fVar10);
      lib::L2CValue::operator_(aLStack224,aLStack112);
      lib::L2CValue::L2CValue(aLStack288,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_Z);
      iVar4 = lib::L2CValue::as_integer(aLStack288);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack272,fVar10);
      lib::L2CValue::operator_(aLStack272,aLStack112);
      uVar6 = lib::L2CValue::as_number((L2CValue *)auStack160);
      lVar7 = lib::L2CValue::as_number(aLStack208);
      uVar5 = lib::L2CValue::as_number(aLStack256);
      local_60 = uVar6 & 0xffffffff | lVar7 << 0x20;
      uStack88 = (ulong)uVar5;
      app::lua_bind::PostureModule__set_pos_impl(*ppBVar9,(Vector3f *)&local_60);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack176,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_PARENT_ROT_X);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)auStack160,fVar10);
      lib::L2CValue::L2CValue(aLStack208,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_PARENT_ROT_Y);
      iVar4 = lib::L2CValue::as_integer(aLStack208);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack192,fVar10);
      lib::L2CValue::L2CValue(aLStack240,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_PARENT_ROT_Z);
      iVar4 = lib::L2CValue::as_integer(aLStack240);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack224,fVar10);
      uVar6 = lib::L2CValue::as_number((L2CValue *)auStack160);
      lVar7 = lib::L2CValue::as_number(aLStack192);
      uVar5 = lib::L2CValue::as_number(aLStack224);
      local_60 = uVar6 & 0xffffffff | lVar7 << 0x20;
      uStack88 = (ulong)uVar5;
      app::lua_bind::PostureModule__set_rot_impl(*ppBVar9,(Vector3f *)&local_60,0);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack160,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_PARENT_LR);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack160);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
      app::lua_bind::PostureModule__set_lr_impl(*ppBVar9,fVar10);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar9);
    }
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((bVar2 & 1U) == 0) goto LAB_7100040c0c;
    HVar8 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,HVar8);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_MENU_MODE);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,(bool)(bVar1 & 1));
    lib::L2CValue::operator_((L2CValue *)auStack160);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x5e54ad4c0);
      uVar6 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0x57c43857a);
        uVar6 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50b44b5ec);
          uVar6 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          if ((uVar6 & 1) == 0) goto LAB_7100040d7c;
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0xa73249b5f);
          lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0xab87848fa);
          lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0xa3eec3a54);
        lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
LAB_7100040d7c:
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x47f9000cf);
    uVar6 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) != 0) goto LAB_7100040c0c;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar8 = lib::L2CValue::as_hash(aLStack128);
    fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
    fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    this_00 = &local_60;
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack160,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_PARENT_MOTION_KIND);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,lVar7);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x47f9000cf);
    lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)auStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_MENU_MODE);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xd513d45fb);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
      goto LAB_7100040af8;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x5e54ad4c0);
    uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xa3eec3a54);
      uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) != 0) goto LAB_7100040ad8;
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x57c43857a);
      uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) != 0) {
LAB_7100040cac:
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0x57c43857a);
        lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
        goto LAB_7100040af8;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xab87848fa);
      uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) != 0) goto LAB_7100040cac;
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50b44b5ec);
      uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0x50b44b5ec);
        lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
        goto LAB_7100040af8;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xa73249b5f);
      uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0xa73249b5f);
        lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
        goto LAB_7100040af8;
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x42af5a458);
      uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0x844853330);
        uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x611c8546c);
          lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
          lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_60);
          goto LAB_7100040af8;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
        lib::L2CValue::L2CValue(aLStack176,true);
        lib::L2CValue::L2CValue(aLStack192,true);
        uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        bVar1 = lib::L2CValue::as_bool(aLStack176);
        bVar3 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::EffectModule__kill_all_impl
                  (*ppBVar9,uVar5,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue(aLStack176,0xf06f29881);
        HVar8 = lib::L2CValue::as_hash(aLStack176);
        bVar1 = app::lua_bind::SoundModule__is_playing_impl(*ppBVar9,HVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack176);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0xf06f29881);
          HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_60);
          app::lua_bind::SoundModule__stop_se_impl(*ppBVar9,HVar8,0);
          goto LAB_7100040af8;
        }
      }
    }
    else {
LAB_7100040ad8:
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x5e54ad4c0);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_60);
LAB_7100040af8:
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x47f9000cf);
    uVar6 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar8 = lib::L2CValue::as_hash(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
      fVar11 = (float)lib::L2CValue::as_number((L2CValue *)auStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar9,HVar8,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_60);
      app::lua_bind::VisibilityModule__set_whole_impl(*ppBVar9,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_WEAPON_ROSETTA_TICO_STATUS_DEMO_WORK_FLAG_SETUP);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    this_00 = auStack160;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
LAB_7100040c0c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

