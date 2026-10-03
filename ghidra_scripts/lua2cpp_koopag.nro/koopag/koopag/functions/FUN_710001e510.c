
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001e510(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  KineticEnergyNormal *pKVar6;
  float *pfVar7;
  L2CValue *this;
  L2CValue *this_00;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_INT_MOVE_FRAME);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar4 = lib::L2CValue::operator<((L2CValue *)&local_60,aLStack112);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
      lib::L2CValue::operator-(aLStack112,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator=(aLStack112,aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
      uVar4 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        iVar2 = lib::L2CValue::as_integer(aLStack144);
        pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl
                                   (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
        lib::L2CValue::L2CValue(aLStack128,pvVar5);
        lib::L2CValue::L2CValue(aLStack160,0.0);
        lib::L2CValue::L2CValue(aLStack176,0.0);
        lib::L2CValue::L2CValue(aLStack192,0.0);
        uVar8 = lib::L2CValue::as_number(aLStack160);
        uVar9 = lib::L2CValue::as_number(aLStack176);
        uVar10 = lib::L2CValue::as_number(aLStack192);
        local_60 = CONCAT44(uVar9,uVar8);
        uStack88 = (ulong)uVar10;
        pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack128);
        app::lua_bind::KineticEnergyNormal__set_speed_3d_impl(pKVar6,(Vector3f *)&local_60);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        pfVar7 = (float *)app::lua_bind::PostureModule__pos_impl
                                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
        lib::L2CValue::L2CValue(aLStack240,*pfVar7);
        lib::L2CValue::L2CValue(aLStack224,pfVar7[1]);
        lib::L2CValue::L2CValue(aLStack208,pfVar7[2]);
        FUN_710001b4c0(aLStack128,param_2,aLStack240);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack240);
        this = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x18cdc1683);
        lib::L2CValue::L2CValue(aLStack160,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_FLOAT_POS_Y);
        iVar2 = lib::L2CValue::as_integer(aLStack160);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl
                                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
        lib::L2CValue::L2CValue(aLStack144,fVar11);
        this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack128,0x162d277af);
        uVar8 = lib::L2CValue::as_number(this);
        uVar9 = lib::L2CValue::as_number(aLStack144);
        uVar10 = lib::L2CValue::as_number(this_00);
        local_60 = CONCAT44(uVar9,uVar8);
        uStack88 = (ulong)uVar10;
        app::lua_bind::PostureModule__set_pos_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(Vector3f *)&local_60);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack128);
      }
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_INT_MOVE_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_INT_ATTACK_FRAME);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

