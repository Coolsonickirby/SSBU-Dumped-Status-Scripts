
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterIke::status::FinalMove_main(L2CFighterIke *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  float *pfVar7;
  L2CValue *pLVar8;
  FighterModuleAccessor *pFVar9;
  L2CValue *pLVar10;
  L2CValue *this_00;
  Hash40 HVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  int in_stack_fffffffffffffd64;
  undefined in_stack_fffffffffffffd6c;
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
  undefined auStack272 [16];
  undefined local_100 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong local_90;
  ulong uStack136;
  
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),0xe35b6b29f);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)(auStack272 + 0x10));
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_90);
  app::lua_bind::EffectModule__kill_kind_impl(this->moduleAccessor,HVar3,(bool)(bVar1 & 1),true);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  pLVar10 = aLStack192;
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,SUB81(pLVar10,0),(L2CValue)0x30);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),*pfVar7);
  pLVar8 = (L2CValue *)(local_100 + 0x10);
  lib::L2CValue::L2CValue(pLVar8,pfVar7[1]);
  lib::L2CValue::L2CValue(aLStack224,pfVar7[2]);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::operator_(pLVar5,pLVar8);
  lib::L2CValue::operator_(pLVar6,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_IKE_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),fVar12);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  lib::L2CValue::operator_((L2CValue *)(auStack272 + 0x10),pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_IKE_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_Y);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),fVar12);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  lib::L2CValue::operator_((L2CValue *)(auStack272 + 0x10),pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  pLVar8 = aLStack288;
  lib::L2CAgent::math_atan((L2CAgent *)auStack272,pLVar8,pLVar10);
  lib::L2CAgent::math_deg((L2CAgent *)(auStack272 + 0x10),pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack272 + 0x10),_FIGHTER_IKE_STATUS_FINAL_WORK_FLOAT_MOVE_ANGLE);
  fVar12 = (float)lib::L2CValue::as_number(aLStack304);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack272 + 0x10));
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lib::L2CValue::L2CValue(aLStack352,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x18cdc1683);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x1fbdb2615);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pFVar9 = (FighterModuleAccessor *)lib::L2CValue::as_pointer(pLVar8);
  uVar15 = app::FighterSpecializer_Ike::get_final_target_pos_base_work(pFVar9);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),(float)uVar15);
  pLVar8 = (L2CValue *)(local_100 + 0x10);
  lib::L2CValue::L2CValue(pLVar8,(float)((ulong)uVar15 >> 0x20));
  lib::L2CValue::operator_(pLVar4,(L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::operator_(pLVar5,pLVar8);
  lib::L2CValue::_L2CValue(pLVar8);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack320,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,_FIGHTER_IKE_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),fVar12);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack272 + 0x10));
  lua2cpp::L2CFighterBase::sign(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack384);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  fVar12 = (float)lib::L2CValue::as_number(aLStack368);
  app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar12);
  app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack416,0.0);
  lib::L2CValue::L2CValue(aLStack432,0.0);
  lib::L2CValue::L2CValue(aLStack448,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x60,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack448);
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue(aLStack416);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  lib::L2CValue::L2CValue(aLStack464,0.0);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_90);
  lib::L2CValue::operator_(pLVar5,aLStack464);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::L2CValue(aLStack480,0.0);
  lib::L2CValue::L2CValue(aLStack496,0.0);
  lib::L2CValue::L2CValue(aLStack512,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x20,(L2CValue)0x10,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack512);
  lib::L2CValue::_L2CValue(aLStack496);
  lib::L2CValue::_L2CValue(aLStack480);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x162d277af);
  lib::L2CValue::operator_(aLStack304,aLStack368);
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),180.0);
  lib::L2CValue::operator_(aLStack528,(L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),0.0);
  lib::L2CValue::L2CValue(aLStack544,0.0);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_90);
  lib::L2CValue::operator_(pLVar4,(L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::operator_(pLVar5,aLStack544);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::L2CValue(aLStack544,0xb482d246d);
  lib::L2CValue::L2CValue(aLStack560,0x4b12bd53f);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x1fbdb2615);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack400,0x162d277af);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack464,0x162d277af);
  lib::L2CValue::L2CValue(aLStack576,1.0);
  lib::L2CValue::L2CValue(aLStack592,true);
  HVar3 = lib::L2CValue::as_hash(aLStack544);
  HVar11 = lib::L2CValue::as_hash(aLStack560);
  uVar16 = lib::L2CValue::as_number(pLVar8);
  lVar17 = lib::L2CValue::as_number(pLVar4);
  uVar13 = lib::L2CValue::as_number(pLVar5);
  local_100._0_8_ = (Hash40MapEntry **)(uVar16 & 0xffffffff | lVar17 << 0x20);
  local_100._8_8_ = (ulong)uVar13;
  uVar16 = lib::L2CValue::as_number(pLVar6);
  lVar17 = lib::L2CValue::as_number(pLVar10);
  uVar13 = lib::L2CValue::as_number(this_00);
  local_90 = uVar16 & 0xffffffff | lVar17 << 0x20;
  uStack136 = (ulong)uVar13;
  fVar12 = (float)lib::L2CValue::as_number(aLStack576);
  bVar1 = lib::L2CValue::as_bool(aLStack592);
  uVar13 = app::lua_bind::EffectModule__req_follow_impl
                     (this->moduleAccessor,HVar3,HVar11,(Vector3f *)(auStack272 + 0x10),
                      (Vector3f *)&local_90,fVar12,(bool)(bVar1 & 1),0,0,-1,
                      in_stack_fffffffffffffd64,0,(bool)in_stack_fffffffffffffd6c,false);
  lib::L2CValue::L2CValue(aLStack528,uVar13);
  lib::L2CValue::_L2CValue(aLStack528);
  lib::L2CValue::_L2CValue(aLStack592);
  lib::L2CValue::_L2CValue(aLStack576);
  lib::L2CValue::_L2CValue(aLStack560);
  lib::L2CValue::_L2CValue(aLStack544);
  lib::L2CValue::_L2CValue(aLStack464);
  lib::L2CValue::_L2CValue(aLStack400);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue((L2CValue *)auStack272);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack272 + 0x10),_FIGHTER_IKE_STATUS_FINAL_FLAG_CHANGE_STATUS);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)(auStack272 + 0x10));
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)(auStack272 + 0x10));
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),0xa2c1ca139);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
  lib::L2CValue::L2CValue(aLStack160,1.0);
  lib::L2CValue::L2CValue(aLStack176,false);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)(auStack272 + 0x10));
  fVar12 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
  fVar14 = (float)lib::L2CValue::as_number(aLStack160);
  bVar1 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar12,fVar14,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)(auStack272 + 0x10),FinalMove_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack272 + 0x10));
  return;
}

