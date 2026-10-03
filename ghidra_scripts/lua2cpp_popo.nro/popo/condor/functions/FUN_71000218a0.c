
void FUN_71000218a0(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  float *pfVar2;
  L2CValue *pLVar3;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  Weapon *pWVar4;
  L2CAgent *this_03;
  uint uVar5;
  float fVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined auStack304 [32];
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
  ulong local_70;
  ulong uStack104;
  
  lib::L2CValue::L2CValue(param_1,false);
  pfVar2 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack176,*pfVar2);
  lib::L2CValue::L2CValue(aLStack160,pfVar2[1]);
  lib::L2CValue::L2CValue(aLStack144,pfVar2[2]);
  FUN_710000b240(aLStack128,param_2,aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue(aLStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(param_2,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
  uVar7 = lib::L2CValue::as_number(this_00);
  lVar8 = lib::L2CValue::as_number(this_01);
  uVar5 = lib::L2CValue::as_number(this_02);
  local_70 = uVar7 & 0xffffffff | lVar8 << 0x20;
  uStack104 = (ulong)uVar5;
  uVar9 = app::sv_camera_manager::world_to_screen((Vector3f *)&local_70,true);
  lib::L2CValue::L2CValue(aLStack272,(float)uVar9);
  lib::L2CValue::L2CValue(aLStack256,(float)((ulong)uVar9 >> 0x20));
  lib::L2CValue::operator=(pLVar3,aLStack272);
  lib::L2CValue::operator=(this,aLStack256);
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),4);
    pWVar4 = (Weapon *)lib::L2CValue::as_pointer(pLVar3);
    fVar6 = (float)app::WeaponSpecializer_PopoCondor::get_reverse_range(pWVar4);
    lib::L2CValue::L2CValue(aLStack272,fVar6);
    lib::L2CValue::operator=((L2CValue *)&local_70,aLStack272);
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),4);
    pWVar4 = (Weapon *)lib::L2CValue::as_pointer(pLVar3);
    fVar6 = (float)app::WeaponSpecializer_PopoCondor::get_unlink_range(pWVar4);
    lib::L2CValue::L2CValue(aLStack272,fVar6);
    lib::L2CValue::operator=((L2CValue *)&local_70,aLStack272);
  }
  lib::L2CValue::~L2CValue(aLStack272);
  fVar6 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),fVar6);
  lib::L2CValue::L2CValue(aLStack272,1.0);
  uVar7 = lib::L2CValue::operator==((L2CValue *)(auStack304 + 0x10),aLStack272);
  lib::L2CValue::~L2CValue(aLStack272);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
  if ((uVar7 & 1) == 0) {
    pLVar3 = (L2CValue *)0x18cdc1683;
    this_03 = (L2CAgent *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    lib::L2CAgent::math_abs(this_03,pLVar3);
    uVar7 = lib::L2CValue::operator<(aLStack272,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack272,true);
      lib::L2CValue::operator=(param_1,aLStack272);
      lib::L2CValue::~L2CValue(aLStack272);
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    uVar7 = lib::L2CValue::operator<(pLVar3,aLStack272);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar7 & 1) == 0) goto LAB_7100021d04;
    lib::L2CValue::L2CValue(aLStack272,true);
    lib::L2CValue::operator=(param_1,aLStack272);
  }
  else {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack272,1920.0);
    lib::L2CValue::operator-(aLStack272,pLVar3);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CAgent::math_abs((L2CAgent *)auStack304,pLVar3);
    uVar7 = lib::L2CValue::operator<((L2CValue *)(auStack304 + 0x10),(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack304);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack272,true);
      lib::L2CValue::operator=(param_1,aLStack272);
      lib::L2CValue::~L2CValue(aLStack272);
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack272,1920.0);
    uVar7 = lib::L2CValue::operator<(aLStack272,pLVar3);
    lib::L2CValue::~L2CValue(aLStack272);
    if ((uVar7 & 1) == 0) goto LAB_7100021d04;
    lib::L2CValue::L2CValue(aLStack272,true);
    lib::L2CValue::operator=(param_1,aLStack272);
  }
  lib::L2CValue::~L2CValue(aLStack272);
LAB_7100021d04:
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

