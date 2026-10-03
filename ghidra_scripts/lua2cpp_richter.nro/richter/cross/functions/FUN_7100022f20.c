
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022f20(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  KineticEnergyNormal *pKVar9;
  KineticEnergyRotNormal *pKVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
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
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    lib::L2CValue::L2CValue(aLStack112,0);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::WorkModule__count_down_int_impl(param_2->moduleAccessor,iVar4,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_SIMON_CROSS_STATUS_TURN_WORK_INT_STAY_FRAME);
      lib::L2CValue::L2CValue(aLStack112,0);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      iVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar3 = app::lua_bind::WorkModule__count_down_int_impl(param_2->moduleAccessor,iVar4,iVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar3 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) goto LAB_7100023424;
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0xbef1cb304);
      lib::L2CValue::L2CValue(aLStack112,0x155abd4cfe);
      uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar7 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = app::lua_bind::WorkModule__get_param_int_impl(param_2->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack96,iVar4);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
      uVar6 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar6 & 1) != 0) {
        fVar11 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack144,fVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
        lib::L2CValue::operator*(aLStack144,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl
                                   (param_2->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack144,pvVar8);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_WEAPON_SIMON_CROSS_INSTANCE_WORK_ID_FLOAT_SPEED);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack160,fVar11);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::operator/(aLStack160,aLStack96);
        lib::L2CValue::operator*(aLStack192,aLStack112);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        uVar12 = lib::L2CValue::as_number(aLStack176);
        uVar13 = lib::L2CValue::as_number(aLStack208);
        local_50 = CONCAT44(uVar13,uVar12);
        uStack72 = 0;
        pKVar9 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack144);
        app::lua_bind::KineticEnergyNormal__set_accel_impl(pKVar9,(Vector2f *)&local_50);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KINETIC_ENERGY_RESERVE_ID_ROT_NORMAL);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl
                                   (param_2->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack176,pvVar8);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_WEAPON_SIMON_CROSS_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack192,fVar11);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_50,_WEAPON_SIMON_CROSS_INSTANCE_WORK_ID_FLOAT_ROT_SPEED_TURN);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
        fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar4);
        lib::L2CValue::L2CValue(aLStack208,fVar11);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::operator-(aLStack208,aLStack192);
        lib::L2CValue::operator/(aLStack240,aLStack96);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        uVar12 = lib::L2CValue::as_number(aLStack224);
        uVar13 = lib::L2CValue::as_number(aLStack256);
        uVar14 = lib::L2CValue::as_number(aLStack272);
        local_50 = CONCAT44(uVar13,uVar12);
        uStack72 = (ulong)uVar14;
        pKVar10 = (KineticEnergyRotNormal *)lib::L2CValue::as_pointer(aLStack176);
        app::lua_bind::KineticEnergyRotNormal__set_brake_impl(pKVar10,(Vector3f *)&local_50);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::L2CValue(aLStack224,-1.0);
        lib::L2CValue::L2CValue(aLStack240,-1.0);
        uVar12 = lib::L2CValue::as_number(aLStack192);
        uVar13 = lib::L2CValue::as_number(aLStack224);
        uVar14 = lib::L2CValue::as_number(aLStack240);
        local_50 = CONCAT44(uVar13,uVar12);
        uStack72 = (ulong)uVar14;
        pKVar10 = (KineticEnergyRotNormal *)lib::L2CValue::as_pointer(aLStack176);
        app::lua_bind::KineticEnergyRotNormal__set_stable_speed_impl(pKVar10,(Vector3f *)&local_50);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      lVar1 = -0x50;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x27936db96d);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,(L2CValue *)&local_50);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      lib::L2CValue::~L2CValue(aLStack128);
      lVar1 = -0x40;
    }
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  }
LAB_7100023424:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

