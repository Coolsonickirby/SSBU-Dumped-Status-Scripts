
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSonicSupersonic::status::Rise_main_loop
          (L2CWeaponSonicSupersonic *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  float *pfVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  float in_register_00005008;
  L2CValue aLStack304 [16];
  ulong local_120;
  ulong uStack280;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  uVar10 = app::sv_camera_manager::get_pos();
  lib::L2CValue::L2CValue(aLStack160,(float)uVar10);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar10 >> 0x20));
  lib::L2CValue::L2CValue(aLStack128,in_register_00005008);
  FUN_7100028a00(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x40,(L2CValue)0x30,(L2CValue)0x20);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_CAMERA_POS_X);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,fVar8);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  lib::L2CValue::operator_(pLVar2,(L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_CAMERA_POS_Y);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,fVar8);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar2,(L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_CAMERA_POS_Z);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,fVar8);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
  lib::L2CValue::operator_(pLVar2,(L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,*pfVar3);
  lib::L2CValue::L2CValue(aLStack272,pfVar3[1]);
  lib::L2CValue::L2CValue(aLStack256,pfVar3[2]);
  FUN_7100028a00(aLStack240,this,&local_120);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
  uVar5 = lib::L2CValue::operator__(pLVar2,pLVar4);
  if ((uVar5 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::operator_(pLVar4,pLVar6);
    lib::L2CValue::operator_(pLVar2,aLStack304);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
    lib::L2CValue::operator_(pLVar2,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack304);
  }
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
  uVar5 = lib::L2CValue::operator__(pLVar2,pLVar4);
  if ((uVar5 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar4,pLVar6);
    lib::L2CValue::operator_(pLVar2,aLStack304);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar2,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack304);
  }
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
  uVar5 = lib::L2CValue::operator__(pLVar2,pLVar4);
  if ((uVar5 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x162d277af);
    lib::L2CValue::operator_(pLVar4,pLVar6);
    lib::L2CValue::operator_(pLVar2,aLStack304);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
    lib::L2CValue::operator_(pLVar2,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack304);
  }
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(pLVar2,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_CAMERA_POS_X);
  fVar8 = (float)lib::L2CValue::as_number(aLStack304);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(pLVar2,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_CAMERA_POS_Y);
  fVar8 = (float)lib::L2CValue::as_number(aLStack304);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::operator_(pLVar2,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_SONIC_SUPERSONIC_STATUS_FINAL_WORK_FLOAT_CAMERA_POS_Z);
  fVar8 = (float)lib::L2CValue::as_number(aLStack304);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x18cdc1683);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x162d277af);
  uVar5 = lib::L2CValue::as_number(pLVar2);
  lVar11 = lib::L2CValue::as_number(pLVar4);
  uVar9 = lib::L2CValue::as_number(pLVar6);
  local_60 = uVar5 & 0xffffffff | lVar11 << 0x20;
  uStack88 = (ulong)uVar9;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,0x102643cb05);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xeb8b6beba);
  uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_120);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar7);
  lib::L2CValue::L2CValue(aLStack160,iVar1);
  uVar5 = lib::L2CValue::operator__(aLStack160,pLVar2);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,*pfVar3);
    lib::L2CValue::L2CValue(aLStack144,pfVar3[1]);
    lib::L2CValue::L2CValue(aLStack128,pfVar3[2]);
    FUN_7100028a00(&local_60,this,aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_60,0x18cdc1683);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_60,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar5 = lib::L2CValue::as_number(pLVar2);
    lVar11 = lib::L2CValue::as_number(pLVar4);
    uVar9 = lib::L2CValue::as_number(aLStack112);
    local_120 = uVar5 & 0xffffffff | lVar11 << 0x20;
    uStack280 = (ulong)uVar9;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_120);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,_WEAPON_SONIC_SUPERSONIC_STATUS_KIND_MOVE);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  }
  return;
}

