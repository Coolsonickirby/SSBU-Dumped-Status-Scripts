
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialHiWallJump_main(L2CFighterMaster *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  FighterKineticEnergyMotion *pFVar7;
  undefined8 *this_00;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  L2CValue *pLVar10;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  Hash40 HVar11;
  Fighter *pFVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 local_180;
  ulong uStack376;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  undefined8 auStack320 [2];
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
  ulong local_90;
  undefined8 uStack136;
  
  lib::L2CValue::L2CValue((L2CValue *)auStack320,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLOAT_WALL_ANGLE)
  ;
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  fVar13 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack176,fVar13);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::L2CValue((L2CValue *)&local_180,0x1086bc4a93);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0xead201d5c);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_180);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,fVar13);
  uVar4 = lib::L2CValue::operator_((L2CValue *)auStack320,aLStack176);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack208,0xe912d2205);
    uVar4 = lib::L2CValue::as_integer(aLStack192);
    uVar5 = lib::L2CValue::as_integer(aLStack208);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack160,fVar13);
    uVar4 = lib::L2CValue::operator__(aLStack176,aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_180);
    if ((uVar4 & 1) == 0) {
      app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue((L2CValue *)&local_180,pvVar6);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      pFVar7 = (FighterKineticEnergyMotion *)lib::L2CValue::as_pointer((L2CValue *)&local_180);
      app::lua_bind::FighterKineticEnergyMotion__reverse_chara_dir_impl(pFVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0x14d0ff157e);
      uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,iVar2);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_WALL_JUMP_STOP_FRAME)
      ;
      iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue((L2CValue *)auStack320,false);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)auStack320);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack208,false);
        FUN_710002a8a0(aLStack192,this,aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
      }
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,&DAT_710002ac20);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)auStack320);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,0x181bac8cba);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack224,false);
      HVar11 = lib::L2CValue::as_hash((L2CValue *)auStack320);
      fVar13 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      fVar14 = (float)lib::L2CValue::as_number(aLStack160);
      bVar1 = lib::L2CValue::as_bool(aLStack224);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar11,fVar13,fVar14,(bool)(bVar1 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      lib::L2CValue::L2CValue((L2CValue *)auStack320,_FIGHTER_INSTANCE_WORK_ID_INT_WALL_JUMP_COUNT);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack320);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)auStack320);
      this_00 = &local_180;
      goto LAB_710001fe84;
    }
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)auStack320);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack320,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_WALL_JUMP_FAIL);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack320);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  this_00 = auStack320;
LAB_710001fe84:
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  lib::L2CValue::L2CValue(aLStack272,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x10,(L2CValue)0x0,(L2CValue)0xf0);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,0x31d39a761);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
  this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x162d277af);
  HVar11 = lib::L2CValue::as_hash((L2CValue *)&local_90);
  uVar4 = lib::L2CValue::as_number(this_01);
  lVar16 = lib::L2CValue::as_number(this_02);
  uVar15 = lib::L2CValue::as_number(this_03);
  local_180 = uVar4 & 0xffffffff | lVar16 << 0x20;
  uStack376 = (ulong)uVar15;
  app::lua_bind::ModelModule__joint_global_position_impl
            (this->moduleAccessor,HVar11,(Vector3f *)&local_180,true);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,(float)local_180);
  lib::L2CValue::L2CValue(aLStack304,local_180._4_4_);
  lib::L2CValue::L2CValue(aLStack288,(float)uStack376);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)auStack320);
  lib::L2CValue::operator_(pLVar9,aLStack304);
  lib::L2CValue::operator_(pLVar10,aLStack288);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  uVar17 = app::lua_bind::PostureModule__pos_2d_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack320,(float)uVar17);
  lib::L2CValue::L2CValue(aLStack304,(float)((ulong)uVar17 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_180,(L2CValue *)auStack320);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack304);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x80,(L2CValue)0x70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue((L2CValue *)auStack320);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
  pFVar12 = (Fighter *)lib::L2CValue::as_pointer(pLVar8);
  uVar17 = app::FighterSpecializer_Master::get_special_hi_cliff_pos(pFVar12);
  lib::L2CValue::L2CValue((L2CValue *)&local_180,(float)uVar17);
  lib::L2CValue::L2CValue(aLStack368,(float)((ulong)uVar17 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(L2CValue *)&local_180);
  lib::L2CValue::L2CValue(aLStack160,aLStack368);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x70,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack368);
  lib::L2CValue::_L2CValue((L2CValue *)&local_180);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x18cdc1683);
  lib::L2CValue::operator_(pLVar9,pLVar10);
  lib::L2CValue::operator_(pLVar8,aLStack160);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x18cdc1683);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x1fbdb2615);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
  pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack224,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar9,pLVar10);
  lib::L2CValue::operator_(pLVar8,aLStack160);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x18cdc1683);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack336,0x1fbdb2615);
  uVar4 = lib::L2CValue::as_number(pLVar8);
  uVar15 = lib::L2CValue::as_number(pLVar9);
  local_90 = uVar4 & 0xffffffff | (ulong)uVar15 << 0x20;
  uStack136 = 0;
  app::lua_bind::PostureModule__set_pos_2d_impl(this->moduleAccessor,(Vector2f *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,SpecialHiWallJump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

