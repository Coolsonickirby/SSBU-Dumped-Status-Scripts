
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100039cd0(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  AttackData *pAVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *pLVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue(aLStack96,0);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::AttackModule__is_attack_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,false);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
  uVar3 = lib::L2CValue::operator==(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0x14ff10e5d5);
    lib::L2CValue::L2CValue(aLStack96,0xc2c18cabb);
    uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(aLStack80,fVar9);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,
               _WEAPON_INKLING_MEGAPHONELASER_INSTANCE_WORK_ID_FLOAT_SHOOT_DEGREE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar9);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
    lib::L2CValue::L2CValue(aLStack128,false);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    pAVar5 = (AttackData *)
             app::lua_bind::AttackModule__attack_data_impl
                       (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(bool)(bVar1 & 1));
    app::lua_bind::AttackData__store_l2c_table_impl(pAVar5);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue(aLStack128,0);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x7af5c7bf6);
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x7af5c7bf6);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[](pLVar7,0x1fbdb2615);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack112,0x7af5c7bf6);
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar8,0x162d277af);
    lib::L2CValue::operator+(pLVar8,aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    uVar10 = lib::L2CValue::as_number(pLVar6);
    uVar11 = lib::L2CValue::as_number(pLVar7);
    uVar12 = lib::L2CValue::as_number(aLStack160);
    local_40 = CONCAT44(uVar11,uVar10);
    uStack56 = (ulong)uVar12;
    bVar1 = app::lua_bind::AttackModule__set_offset2_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,(Vector3f *)&local_40)
    ;
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  return;
}

