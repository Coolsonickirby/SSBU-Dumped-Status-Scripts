
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRosettaTico::status::Dead_main(L2CWeaponRosettaTico *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  HitStatus HVar4;
  L2CValue *this_00;
  ulong uVar5;
  Hash40 HVar6;
  BattleObjectModuleAccessor **ppBVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
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
  ulong local_80;
  ulong uStack120;
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_FREE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  ppBVar7 = &this->moduleAccessor;
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_CANCEL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_70);
  app::lua_bind::AreaModule__set_whole_impl(*ppBVar7,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_70);
  app::lua_bind::VisibilityModule__set_whole_impl(*ppBVar7,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_HIT_STATUS_OFF);
  HVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::HitModule__set_whole_impl(*ppBVar7,HVar4,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_80,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_DEAD_OUTSIDE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_DEAD_INHALED);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0x5e747d52e);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
      lib::L2CValue::L2CValue(aLStack144,1.0);
      lib::L2CValue::L2CValue(aLStack160,false);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_70);
      fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_80);
      fVar9 = (float)lib::L2CValue::as_number(aLStack144);
      bVar1 = lib::L2CValue::as_bool(aLStack160);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar7,HVar6,fVar8,fVar9,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_CAMERA_OFF);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar7,iVar3);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      app::lua_bind::MotionModule__set_rate_impl(*ppBVar7,fVar8);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_CAMERA_OFF);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
    }
    lVar11 = -0x60;
  }
  else {
    fVar8 = (float)app::lua_bind::PostureModule__pos_x_impl(*ppBVar7);
    lib::L2CValue::L2CValue(aLStack144,fVar8);
    fVar8 = (float)app::lua_bind::PostureModule__pos_y_impl(*ppBVar7);
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    fVar8 = (float)app::lua_bind::PostureModule__pos_z_impl(*ppBVar7);
    lib::L2CValue::L2CValue(aLStack176,fVar8);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208);
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_70);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_70);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    uVar5 = lib::L2CValue::as_number(aLStack144);
    lVar11 = lib::L2CValue::as_number(aLStack160);
    uVar10 = lib::L2CValue::as_number(aLStack176);
    local_70 = uVar5 & 0xffffffff | lVar11 << 0x20;
    uStack104 = (ulong)uVar10;
    fVar8 = (float)lib::L2CValue::as_number(aLStack192);
    bVar1 = lib::L2CValue::as_bool(aLStack208);
    fVar8 = (float)app::lua_bind::EffectModule__get_dead_effect_rot_z_impl
                             (*ppBVar7,(Vector3f *)&local_70,fVar8,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack224,fVar8);
    uVar5 = lib::L2CValue::as_number(aLStack144);
    lVar11 = lib::L2CValue::as_number(aLStack160);
    uVar10 = lib::L2CValue::as_number(aLStack176);
    local_70 = uVar5 & 0xffffffff | lVar11 << 0x20;
    uStack104 = (ulong)uVar10;
    fVar8 = (float)lib::L2CValue::as_number(aLStack192);
    bVar1 = lib::L2CValue::as_bool(aLStack208);
    fVar8 = (float)app::lua_bind::EffectModule__get_dead_effect_scale_impl
                             (*ppBVar7,(Vector3f *)&local_70,fVar8,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack240,fVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x104564846d);
    HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_70);
    iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar7,HVar6,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack256,iVar3);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack272,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_PLAYED_DEAD_SE);
    iVar3 = lib::L2CValue::as_integer(aLStack272);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar1 & 1));
    lib::L2CValue::operator_((L2CValue *)&local_80);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0xbbafd25e6);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_70);
      iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar7,HVar6,true,false,false,false,0);
      lib::L2CValue::L2CValue(aLStack272,iVar3);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
    lib::L2CValue::L2CValue(aLStack304,0x1279d130f4);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
    lib::L2CValue::operator_(aLStack240,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack368,EFFECT_SUB_ATTRIBUTE_NONE);
    lib::L2CValue::L2CValue(aLStack384,-1);
    HVar6 = lib::L2CValue::as_hash(aLStack304);
    uVar5 = lib::L2CValue::as_number(aLStack144);
    lVar11 = lib::L2CValue::as_number(aLStack160);
    uVar10 = lib::L2CValue::as_number(aLStack176);
    local_70 = uVar5 & 0xffffffff | lVar11 << 0x20;
    uStack104 = (ulong)uVar10;
    uVar5 = lib::L2CValue::as_number(aLStack320);
    lVar11 = lib::L2CValue::as_number(aLStack336);
    uVar10 = lib::L2CValue::as_number(aLStack224);
    local_80 = uVar5 & 0xffffffff | lVar11 << 0x20;
    uStack120 = (ulong)uVar10;
    fVar8 = (float)lib::L2CValue::as_number(aLStack352);
    uVar10 = lib::L2CValue::as_integer(aLStack368);
    iVar3 = lib::L2CValue::as_integer(aLStack384);
    uVar10 = app::lua_bind::EffectModule__req_impl
                       (*ppBVar7,HVar6,(Vector3f *)&local_70,(Vector3f *)&local_80,fVar8,uVar10,
                        iVar3,false,0);
    lib::L2CValue::L2CValue(aLStack288,uVar10);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    fVar8 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
    app::lua_bind::MotionModule__set_rate_impl(*ppBVar7,fVar8);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_CAMERA_OFF);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar7,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lVar11 = -0x80;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar11));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x10eaa9bff4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
  HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_70);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  app::lua_bind::ControlModule__set_rumble_impl(*ppBVar7,HVar6,iVar3,false,0x50000000);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,Dead_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)((char)&stack0xfffffffffffffff0 + -0x60));
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  return;
}

