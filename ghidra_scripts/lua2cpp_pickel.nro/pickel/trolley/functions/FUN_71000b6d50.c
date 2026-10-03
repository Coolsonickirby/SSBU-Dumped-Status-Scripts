
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000b6d50(L2CValue *param_1,long param_2,L2CValue *param_3,L2CValue *param_4)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  BattleObjectModuleAccessor *pBVar8;
  GroundCollisionLine *pGVar9;
  void *pvVar10;
  Weapon *pWVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  long lVar15;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  ulong local_e0;
  ulong uStack216;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 local_70;
  undefined8 uStack104;
  
  lib::L2CValue::L2CValue(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0x6017d9eb2);
  lib::L2CValue::operator+(pLVar3,param_4);
  lib::L2CAgent::math_abs((L2CAgent *)auStack176,param_4);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,0.0);
  uVar4 = lib::L2CValue::operator<((L2CValue *)&local_e0,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),4);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](param_3,0xad4d40fc9);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](param_3,0xaa3d33f5f);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue(aLStack240,true);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_3,0x9e84e044e);
    pWVar11 = (Weapon *)lib::L2CValue::as_pointer(pLVar3);
    uVar4 = lib::L2CValue::as_number(pLVar5);
    lVar15 = lib::L2CValue::as_number(pLVar6);
    uVar14 = lib::L2CValue::as_number((L2CValue *)&local_70);
    local_e0 = uVar4 & 0xffffffff | lVar15 << 0x20;
    uStack216 = (ulong)uVar14;
    bVar1 = lib::L2CValue::as_bool(aLStack240);
    fVar12 = (float)lib::L2CValue::as_number(pLVar7);
    app::WeaponSpecializer_PickelTrolley::generate_rail
              (pWVar11,(Vector3f *)&local_e0,(bool)(bVar1 & 1),fVar12);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  }
  else {
    pLVar3 = (L2CValue *)(param_2 + 200);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](param_3,0x4d114b4f6);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](param_3,0xad4d40fc9);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    pGVar9 = (GroundCollisionLine *)lib::L2CValue::as_pointer(pLVar6);
    fVar12 = (float)lib::L2CValue::as_number(pLVar7);
    fVar13 = (float)lib::L2CValue::as_number((L2CValue *)auStack176);
    uVar4 = lib::L2CValue::as_number(aLStack144);
    uVar14 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
    local_70 = (BattleObjectModuleAccessor *)(uVar4 & 0xffffffff | (ulong)uVar14 << 0x20);
    uStack104 = 0;
    pvVar10 = (void *)app::FighterUtil::get_pos_on_line
                                (pBVar8,pGVar9,fVar12,fVar13,(Vector2f *)&local_70);
    if (pvVar10 == (void *)0x0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_e0,pvVar10);
    }
    lib::L2CValue::L2CValue(aLStack208,(float)local_70);
    lib::L2CValue::L2CValue(aLStack192,local_70._4_4_);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_e0);
    lib::L2CValue::operator=(aLStack144,aLStack208);
    lib::L2CValue::operator=((L2CValue *)(auStack176 + 0x10),aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    uVar4 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack240,0.1);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](pLVar3,5);
      pLVar6 = (L2CValue *)lib::L2CValue::operator[](param_3,0x9e84e044e);
      lib::L2CValue::operator*(aLStack240,pLVar6);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      pGVar9 = (GroundCollisionLine *)lib::L2CValue::as_pointer(aLStack128);
      fVar12 = (float)lib::L2CValue::as_number(aLStack144);
      fVar13 = (float)lib::L2CValue::as_number(aLStack288);
      uVar4 = lib::L2CValue::as_number(aLStack256);
      uVar14 = lib::L2CValue::as_number(aLStack272);
      local_70 = (BattleObjectModuleAccessor *)(uVar4 & 0xffffffff | (ulong)uVar14 << 0x20);
      uStack104 = 0;
      pvVar10 = (void *)app::FighterUtil::get_pos_on_line
                                  (pBVar8,pGVar9,fVar12,fVar13,(Vector2f *)&local_70);
      if (pvVar10 == (void *)0x0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_e0,pvVar10);
      }
      lib::L2CValue::L2CValue(aLStack208,(float)local_70);
      lib::L2CValue::L2CValue(aLStack192,local_70._4_4_);
      lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_e0);
      lib::L2CValue::operator=(aLStack256,aLStack208);
      lib::L2CValue::operator=(aLStack272,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
    }
    uVar4 = lib::L2CValue::operator==(aLStack128,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,false);
      goto LAB_71000b740c;
    }
    lib::L2CValue::L2CValue(aLStack240,0.0);
    uVar4 = lib::L2CValue::as_number(aLStack144);
    lVar15 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
    uVar14 = lib::L2CValue::as_number(aLStack240);
    local_e0 = uVar4 & 0xffffffff | lVar15 << 0x20;
    uStack216 = (ulong)uVar14;
    iVar2 = app::GroundUtility::check_dead_area((Vector3f *)&local_e0);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar2);
    lib::L2CValue::L2CValue((L2CValue *)&local_e0,_GROUND_DEAD_AREA_CHECK_RESULT_NONE);
    uVar4 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack240);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,false);
      goto LAB_71000b740c;
    }
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](pLVar3,4);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue(aLStack240,true);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](param_3,0x9e84e044e);
    pWVar11 = (Weapon *)lib::L2CValue::as_pointer(pLVar3);
    uVar4 = lib::L2CValue::as_number(aLStack144);
    lVar15 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
    uVar14 = lib::L2CValue::as_number((L2CValue *)&local_70);
    local_e0 = uVar4 & 0xffffffff | lVar15 << 0x20;
    uStack216 = (ulong)uVar14;
    bVar1 = lib::L2CValue::as_bool(aLStack240);
    fVar12 = (float)lib::L2CValue::as_number(pLVar5);
    app::WeaponSpecializer_PickelTrolley::generate_rail
              (pWVar11,(Vector3f *)&local_e0,(bool)(bVar1 & 1),fVar12);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0x4d114b4f6);
    lib::L2CValue::operator=(pLVar3,aLStack128);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0xad4d40fc9);
    lib::L2CValue::operator=(pLVar3,aLStack144);
    pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0xaa3d33f5f);
    lib::L2CValue::operator=(pLVar3,(L2CValue *)(auStack176 + 0x10));
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0x7b23db7b8);
  lib::L2CValue::L2CValue((L2CValue *)&local_e0,1);
  lib::L2CValue::operator+(pLVar3,(L2CValue *)&local_e0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_e0);
  pLVar3 = (L2CValue *)lib::L2CValue::operator[](param_3,0x7b23db7b8);
  lib::L2CValue::operator=(pLVar3,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(param_1,true);
LAB_71000b740c:
  lib::L2CValue::~L2CValue((L2CValue *)auStack176);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

