
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100044110(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float *pfVar5;
  L2CValue *pLVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined8 local_c0;
  ulong uStack184;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack112,0x15857c6a39);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_c0);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  lib::L2CValue::L2CValue((L2CValue *)&local_c0,0);
  uVar2 = lib::L2CValue::operator<((L2CValue *)&local_c0,aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
  if ((uVar2 & 1) != 0) {
    pLVar6 = (L2CValue *)(param_2 + 200);
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xe);
    uVar2 = lib::L2CValue::operator<=(pLVar4,aLStack96);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack144);
      pfVar5 = (float *)app::lua_bind::PostureModule__rot_impl
                                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),0);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,*pfVar5);
      lib::L2CValue::L2CValue(aLStack176,pfVar5[1]);
      lib::L2CValue::L2CValue(aLStack160,pfVar5[2]);
      lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_c0);
      lib::L2CValue::operator=(aLStack128,aLStack176);
      lib::L2CValue::operator=(aLStack144,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLOAT_ANGLE);
      iVar1 = lib::L2CValue::as_integer(aLStack240);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
      lib::L2CValue::L2CValue(aLStack224,fVar7);
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xe);
      lib::L2CValue::operator/(pLVar4,aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)&local_c0,1.0);
      lib::L2CValue::operator-((L2CValue *)&local_c0,aLStack272);
      lib::L2CValue::~L2CValue((L2CValue *)&local_c0);
      lib::L2CValue::operator*(aLStack224,aLStack256);
      lib::L2CValue::operator=(aLStack112,aLStack208);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      uVar8 = lib::L2CValue::as_number(aLStack112);
      uVar9 = lib::L2CValue::as_number(aLStack128);
      uVar10 = lib::L2CValue::as_number(aLStack144);
      local_c0 = CONCAT44(uVar9,uVar8);
      uStack184 = (ulong)uVar10;
      app::lua_bind::PostureModule__set_rot_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(Vector3f *)&local_c0,0);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xe);
      uVar2 = lib::L2CValue::operator<=(aLStack96,pLVar6);
      if ((uVar2 & 1) != 0) {
        lib::L2CValue::L2CValue(param_1,true);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack112);
        goto LAB_71000443e8;
      }
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
    }
  }
  lib::L2CValue::L2CValue(param_1,false);
LAB_71000443e8:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

