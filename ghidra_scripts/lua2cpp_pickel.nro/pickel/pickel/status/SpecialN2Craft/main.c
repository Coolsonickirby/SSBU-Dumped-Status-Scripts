
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN2Craft_main(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Hash40 HVar7;
  BattleObjectModuleAccessor **ppBVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  long lVar12;
  int in_stack_fffffffffffffd34;
  undefined in_stack_fffffffffffffd3c;
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
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
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong local_a0;
  ulong uStack152;
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  ppBVar8 = &this->moduleAccessor;
  iVar2 = app::lua_bind::WorkModule__get_int_impl(*ppBVar8,iVar2);
  lib::L2CValue::L2CValue(aLStack176,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_GENERATE);
  uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_VERSION_UP);
    uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar4 & 1) != 0) goto LAB_710005ae58;
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0xa82125b6f);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CValue::L2CValue(aLStack192,1.0);
    lib::L2CValue::L2CValue(aLStack208,false);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_90);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
    fVar10 = (float)lib::L2CValue::as_number(aLStack192);
    bVar1 = lib::L2CValue::as_bool(aLStack208);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar8,HVar5,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  else {
LAB_710005ae58:
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0xa82125b6f);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
    lib::L2CValue::L2CValue(aLStack192,1.0);
    lib::L2CValue::L2CValue(aLStack208,true);
    HVar5 = lib::L2CValue::as_hash((L2CValue *)&local_90);
    fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_a0);
    fVar10 = (float)lib::L2CValue::as_number(aLStack192);
    bVar1 = lib::L2CValue::as_bool(aLStack208);
    app::lua_bind::MotionModule__change_motion_impl
              (*ppBVar8,HVar5,fVar9,fVar10,(bool)(bVar1 & 1),0.0,false,false);
  }
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_GENERATE);
  uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_CRAFT_STATUS_VERSION_UP);
    uVar4 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar4 & 1) == 0) goto LAB_710005bedc;
  }
  fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,-1.0);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_FLAG_IS_L);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar8,iVar2);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_FLAG_IS_L);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar8,iVar2);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x11a675911d);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack192,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x11d172a18b);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x11487bf031);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack224,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  fVar9 = (float)app::lua_bind::ModelModule__scale_z_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
  uVar4 = lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar4 & 1) == 0) {
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,-1.0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator_(aLStack192);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_90);
      goto LAB_710005b25c;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_90);
LAB_710005b25c:
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue(aLStack256,aLStack192);
  lib::L2CValue::L2CValue(aLStack272,aLStack208);
  lib::L2CValue::L2CValue(aLStack288,aLStack224);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack320,0x128c843b48);
  lib::L2CValue::L2CValue(aLStack336,0x31ed91fca);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lib::L2CValue::L2CValue(aLStack368,0.0);
  lib::L2CValue::L2CValue(aLStack384,0.0);
  lib::L2CValue::L2CValue(aLStack400,1.0);
  lib::L2CValue::L2CValue(aLStack416,false);
  lib::L2CValue::L2CValue(aLStack432,_EFFECT_SUB_ATTRIBUTE_UNSYNC_VIS_WHOLE);
  HVar5 = lib::L2CValue::as_hash(aLStack320);
  HVar7 = lib::L2CValue::as_hash(aLStack336);
  uVar4 = lib::L2CValue::as_number(this_00);
  lVar12 = lib::L2CValue::as_number(this_01);
  uVar11 = lib::L2CValue::as_number(this_02);
  local_90 = uVar4 & 0xffffffff | lVar12 << 0x20;
  uStack136 = (ulong)uVar11;
  uVar4 = lib::L2CValue::as_number(aLStack352);
  lVar12 = lib::L2CValue::as_number(aLStack368);
  uVar11 = lib::L2CValue::as_number(aLStack384);
  local_a0 = uVar4 & 0xffffffff | lVar12 << 0x20;
  uStack152 = (ulong)uVar11;
  fVar9 = (float)lib::L2CValue::as_number(aLStack400);
  bVar1 = lib::L2CValue::as_bool(aLStack416);
  uVar11 = lib::L2CValue::as_integer(aLStack432);
  uVar11 = app::lua_bind::EffectModule__req_follow_impl
                     (*ppBVar8,HVar5,HVar7,(Vector3f *)&local_90,(Vector3f *)&local_a0,fVar9,
                      (bool)(bVar1 & 1),uVar11,0,-1,in_stack_fffffffffffffd34,0,
                      (bool)in_stack_fffffffffffffd3c,false);
  lib::L2CValue::L2CValue(aLStack304,uVar11);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_GAUGE_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer(aLStack304);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue(aLStack320,0x1674351f6a);
  lib::L2CValue::L2CValue(aLStack448,false);
  FUN_7100058e90(aLStack336,this,aLStack448);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_MATERIAL_KIND_DIAMOND);
  uVar4 = lib::L2CValue::operator__(aLStack336,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_MATERIAL_KIND_GOLD);
    uVar4 = lib::L2CValue::operator__(aLStack336,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x160f011b36);
      lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_90);
      goto LAB_710005b6ac;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_MATERIAL_KIND_IRON);
    uVar4 = lib::L2CValue::operator__(aLStack336,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1630d8e6fb);
      lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_90);
      goto LAB_710005b6ac;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_MATERIAL_KIND_STONE);
    uVar4 = lib::L2CValue::operator__(aLStack336,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x17cabe59d7);
      lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_90);
      goto LAB_710005b6ac;
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_PICKEL_MATERIAL_KIND_WOOD);
    uVar4 = lib::L2CValue::operator__(aLStack336,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1674351f6a);
      lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_90);
      goto LAB_710005b6ac;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x199195a6fd);
    lib::L2CValue::operator_(aLStack320,(L2CValue *)&local_90);
LAB_710005b6ac:
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x10e97d25f8);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack352,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x109e7a156e);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack368,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x10077344d4);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack384,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  fVar9 = (float)app::lua_bind::ModelModule__scale_z_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
  uVar4 = lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar4 & 1) == 0) {
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,-1.0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator_(aLStack352);
      lib::L2CValue::operator_(aLStack352,(L2CValue *)&local_90);
      goto LAB_710005b894;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::operator_(aLStack352,(L2CValue *)&local_90);
LAB_710005b894:
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue(aLStack416,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack464,0.0);
  lib::L2CValue::L2CValue(aLStack480,0.0);
  lib::L2CValue::L2CValue(aLStack496,1.0);
  lib::L2CValue::L2CValue(aLStack512,false);
  lib::L2CValue::L2CValue(aLStack528,_EFFECT_SUB_ATTRIBUTE_UNSYNC_VIS_WHOLE);
  HVar5 = lib::L2CValue::as_hash(aLStack320);
  HVar7 = lib::L2CValue::as_hash(aLStack416);
  uVar4 = lib::L2CValue::as_number(aLStack352);
  lVar12 = lib::L2CValue::as_number(aLStack368);
  uVar11 = lib::L2CValue::as_number(aLStack384);
  local_90 = uVar4 & 0xffffffff | lVar12 << 0x20;
  uStack136 = (ulong)uVar11;
  uVar4 = lib::L2CValue::as_number(aLStack432);
  lVar12 = lib::L2CValue::as_number(aLStack464);
  uVar11 = lib::L2CValue::as_number(aLStack480);
  local_a0 = uVar4 & 0xffffffff | lVar12 << 0x20;
  uStack152 = (ulong)uVar11;
  fVar9 = (float)lib::L2CValue::as_number(aLStack496);
  bVar1 = lib::L2CValue::as_bool(aLStack512);
  uVar11 = lib::L2CValue::as_integer(aLStack528);
  uVar11 = app::lua_bind::EffectModule__req_follow_impl
                     (*ppBVar8,HVar5,HVar7,(Vector3f *)&local_90,(Vector3f *)&local_a0,fVar9,
                      (bool)(bVar1 & 1),uVar11,0,-1,in_stack_fffffffffffffd34,0,
                      (bool)in_stack_fffffffffffffd3c,false);
  lib::L2CValue::L2CValue(aLStack400,uVar11);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,
             _FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_MATERIAL_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer(aLStack400);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x1918a295b6);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack416,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x196fa5a520);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack432,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xf899192aa);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x19f6acf49a);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar8,uVar4,uVar6);
  lib::L2CValue::L2CValue(aLStack464,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  fVar9 = (float)app::lua_bind::ModelModule__scale_z_impl(*ppBVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar9);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
  uVar4 = lib::L2CValue::operator_((L2CValue *)&local_a0,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
  if ((uVar4 & 1) == 0) {
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,-1.0);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_a0,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_a0);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::operator_(aLStack416);
      lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_90);
      goto LAB_710005bc44;
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
    lib::L2CValue::operator_(aLStack416,(L2CValue *)&local_90);
LAB_710005bc44:
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  lib::L2CValue::L2CValue(aLStack496,0x161d62d394);
  lib::L2CValue::L2CValue(aLStack512,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack528,0.0);
  lib::L2CValue::L2CValue(aLStack544,0.0);
  lib::L2CValue::L2CValue(aLStack560,0.0);
  lib::L2CValue::L2CValue(aLStack576,1.0);
  lib::L2CValue::L2CValue(aLStack592,false);
  lib::L2CValue::L2CValue(aLStack608,_EFFECT_SUB_ATTRIBUTE_UNSYNC_VIS_WHOLE);
  HVar5 = lib::L2CValue::as_hash(aLStack496);
  HVar7 = lib::L2CValue::as_hash(aLStack512);
  uVar4 = lib::L2CValue::as_number(aLStack416);
  lVar12 = lib::L2CValue::as_number(aLStack432);
  uVar11 = lib::L2CValue::as_number(aLStack464);
  local_90 = uVar4 & 0xffffffff | lVar12 << 0x20;
  uStack136 = (ulong)uVar11;
  uVar4 = lib::L2CValue::as_number(aLStack528);
  lVar12 = lib::L2CValue::as_number(aLStack544);
  uVar11 = lib::L2CValue::as_number(aLStack560);
  local_a0 = uVar4 & 0xffffffff | lVar12 << 0x20;
  uStack152 = (ulong)uVar11;
  fVar9 = (float)lib::L2CValue::as_number(aLStack576);
  bVar1 = lib::L2CValue::as_bool(aLStack592);
  uVar11 = lib::L2CValue::as_integer(aLStack608);
  uVar11 = app::lua_bind::EffectModule__req_follow_impl
                     (*ppBVar8,HVar5,HVar7,(Vector3f *)&local_90,(Vector3f *)&local_a0,fVar9,
                      (bool)(bVar1 & 1),uVar11,0,-1,in_stack_fffffffffffffd34,0,
                      (bool)in_stack_fffffffffffffd3c,false);
  lib::L2CValue::L2CValue(aLStack480,uVar11);
  lib::L2CValue::_L2CValue(aLStack608);
  lib::L2CValue::_L2CValue(aLStack592);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,
             _FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_GAUGE_SUCCESS_EFFECT_HANDLE);
  iVar2 = lib::L2CValue::as_integer(aLStack480);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar8,iVar2,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  uVar11 = lib::L2CValue::as_integer(aLStack480);
  fVar9 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  app::lua_bind::EffectModule__set_rate_impl(*ppBVar8,uVar11,fVar9);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack480);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
LAB_710005bedc:
  lib::L2CValue::L2CValue(aLStack624,0xf899192aa);
  lua2cpp::L2CFighterCommon::sub_set_special_start_common_kinetic_setting(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack624);
  lib::L2CValue::L2CValue(aLStack640,&DAT_710005c570);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack640);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

