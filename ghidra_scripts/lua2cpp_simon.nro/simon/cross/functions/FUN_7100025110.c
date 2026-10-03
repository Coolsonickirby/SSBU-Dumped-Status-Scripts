
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100025110(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  KineticEnergyNormal *pKVar8;
  L2CValue *this;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  undefined8 uStack56;
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_SIMON_CROSS_STATUS_FLY_WORK_INT_TURN_FRAME);
    lib::L2CValue::L2CValue(aLStack96,0);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__count_down_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0xbef1cb304);
      lib::L2CValue::L2CValue(aLStack96,0x105777853b);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_40);
      uVar6 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      lib::L2CValue::L2CValue((L2CValue *)&local_40,0);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_40,aLStack80);
      lib::L2CValue::~L2CValue((L2CValue *)&local_40);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_WEAPON_SIMON_CROSS_STATUS_FLY_WORK_INT_TURN_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        iVar3 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack96,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_40,1);
        lib::L2CValue::operator-(aLStack80,(L2CValue *)&local_40);
        lib::L2CValue::~L2CValue((L2CValue *)&local_40);
        uVar5 = lib::L2CValue::operator==(aLStack96,aLStack160);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack144);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_40,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
          pvVar7 = (void *)app::lua_bind::KineticModule__get_energy_impl
                                     (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack96,pvVar7);
          lib::L2CValue::~L2CValue((L2CValue *)&local_40);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_40,_WEAPON_SIMON_CROSS_INSTANCE_WORK_ID_FLOAT_SPEED);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_40);
          fVar9 = (float)app::lua_bind::WorkModule__get_float_impl
                                   (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack144,fVar9);
          lib::L2CValue::~L2CValue((L2CValue *)&local_40);
          lib::L2CValue::operator/(aLStack144,aLStack80);
          lib::L2CValue::L2CValue(aLStack176,0.0);
          uVar10 = lib::L2CValue::as_number(aLStack160);
          uVar11 = lib::L2CValue::as_number(aLStack176);
          local_40 = CONCAT44(uVar11,uVar10);
          uStack56 = 0;
          pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack96);
          app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar8,(Vector2f *)&local_40);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::L2CValue(aLStack160,0.0);
          lib::L2CValue::L2CValue(aLStack176,-1.0);
          uVar10 = lib::L2CValue::as_number(aLStack160);
          uVar11 = lib::L2CValue::as_number(aLStack176);
          local_40 = CONCAT44(uVar11,uVar10);
          uStack56 = 0;
          pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack96);
          app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar8,(Vector2f *)&local_40);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack96);
        }
      }
      this = aLStack80;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,_WEAPON_SIMON_CROSS_STATUS_KIND_TURN);
      lib::L2CValue::L2CValue(aLStack128,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack128);
      this = aLStack112;
    }
    lib::L2CValue::~L2CValue(this);
  }
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

