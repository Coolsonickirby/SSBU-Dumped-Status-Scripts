
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010030(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  uchar uVar1;
  int iVar2;
  float *pfVar3;
  L2CValue *pLVar4;
  L2CValue *this;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 local_80;
  ulong uStack120;
  undefined8 local_70;
  ulong uStack104;
  
  fVar5 = (float)app::lua_bind::PostureModule__lr_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack144,fVar5);
  fVar5 = (float)app::lua_bind::PostureModule__scale_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack160,fVar5);
  pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl
                              (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack224,*pfVar3);
  lib::L2CValue::L2CValue(aLStack208,pfVar3[1]);
  lib::L2CValue::L2CValue(aLStack192,pfVar3[2]);
  FUN_7100009f90(aLStack176,param_1,aLStack224);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack224);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  lib::L2CValue::operator*(param_2,aLStack144);
  lib::L2CValue::operator*(aLStack240,aLStack160);
  lib::L2CValue::operator+(pLVar4,(L2CValue *)&local_80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  lib::L2CValue::~L2CValue(aLStack240);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::operator*(param_3,aLStack160);
  lib::L2CValue::operator+(pLVar4,(L2CValue *)&local_80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  lib::L2CValue::operator=(pLVar4,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_CAMERA_UPDATE_POS_XYZ);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::CameraModule__set_enable_update_pos_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,-1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack240,0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  this = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  this_01 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x18cdc1683);
  this_02 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x1fbdb2615);
  this_03 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
  iVar2 = lib::L2CValue::as_integer(aLStack240);
  uVar6 = lib::L2CValue::as_number(pLVar4);
  uVar7 = lib::L2CValue::as_number(this);
  uVar8 = lib::L2CValue::as_number(this_00);
  local_70 = CONCAT44(uVar7,uVar6);
  uStack104 = (ulong)uVar8;
  uVar6 = lib::L2CValue::as_number(this_01);
  uVar7 = lib::L2CValue::as_number(this_02);
  uVar8 = lib::L2CValue::as_number(this_03);
  local_80 = CONCAT44(uVar7,uVar6);
  uStack120 = (ulong)uVar8;
  app::lua_bind::CameraModule__update_force_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(Vector3f *)&local_70,
             (Vector3f *)&local_80);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
  uVar1 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::CameraModule__set_enable_update_pos_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar1,-1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  return;
}

