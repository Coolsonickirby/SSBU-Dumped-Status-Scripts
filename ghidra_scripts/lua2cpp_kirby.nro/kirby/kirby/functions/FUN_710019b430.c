
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710019b430(void *param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *this;
  L2CValue *this_00;
  Hash40 HVar6;
  Hash40 HVar7;
  ulong uVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  int in_stack_fffffffffffffe74;
  undefined in_stack_fffffffffffffe7c;
  L2CValue aLStack320 [16];
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
  L2CValue aLStack144 [16];
  undefined8 local_80;
  undefined8 uStack120;
  ulong local_70;
  ulong uStack104;
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_5);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack160,0x5eb263e0d);
    lib::L2CValue::L2CValue(aLStack176,1.0);
    lib::L2CValue::L2CValue(aLStack192,2.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    HVar6 = lib::L2CValue::as_hash(param_2);
    HVar7 = lib::L2CValue::as_hash(aLStack160);
    uVar4 = lib::L2CValue::as_number(aLStack176);
    lVar11 = lib::L2CValue::as_number(aLStack192);
    uVar10 = lib::L2CValue::as_number(aLStack208);
    local_70 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack104 = (ulong)uVar10;
    uStack120 = _LUA_SCRIPT_STATUS_FUNC_STATUS_END;
    local_80 = LUA_SCRIPT_STATUS_FUNC_FIX_CAMERA;
    uVar10 = app::lua_bind::EffectModule__req_follow_impl
                       (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,HVar7,
                        (Vector3f *)&local_70,(Vector3f *)&local_80,1.0,false,0,0,-1,
                        in_stack_fffffffffffffe74,0,(bool)in_stack_fffffffffffffe7c,false);
    lib::L2CValue::L2CValue(aLStack144,uVar10);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = lib::L2CValue::as_integer(param_3);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2,iVar3);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    lVar11 = -0x90;
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(param_1,(L2CValue)0x0,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    fVar9 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40));
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
    uVar4 = lib::L2CValue::operator==((L2CValue *)&local_80,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_80);
    if ((uVar4 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,-2.5);
      lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,-1.2);
      lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x162d277af);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,-1.0);
      lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_70);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,-2.0);
      lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,-1.2);
      lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x162d277af);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,1.5);
      lib::L2CValue::operator=(pLVar5,(L2CValue *)&local_70);
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue(aLStack176,0x51129036e);
    pLVar5 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x18cdc1683);
    this = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x1fbdb2615);
    this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack144,0x162d277af);
    HVar6 = lib::L2CValue::as_hash(param_2);
    HVar7 = lib::L2CValue::as_hash(aLStack176);
    uVar4 = lib::L2CValue::as_number(pLVar5);
    lVar11 = lib::L2CValue::as_number(this);
    uVar10 = lib::L2CValue::as_number(this_00);
    local_70 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack104 = (ulong)uVar10;
    uStack120 = _LUA_SCRIPT_STATUS_FUNC_STATUS_END;
    local_80 = LUA_SCRIPT_STATUS_FUNC_FIX_CAMERA;
    uVar10 = app::lua_bind::EffectModule__req_follow_impl
                       (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),HVar6,HVar7,
                        (Vector3f *)&local_70,(Vector3f *)&local_80,1.0,false,0,0,-1,
                        in_stack_fffffffffffffe74,0,(bool)in_stack_fffffffffffffe7c,false);
    lib::L2CValue::L2CValue(aLStack160,uVar10);
    lib::L2CValue::~L2CValue(aLStack176);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    iVar3 = lib::L2CValue::as_integer(param_3);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),iVar2,iVar3);
    lib::L2CValue::~L2CValue(aLStack160);
    lVar11 = -0x80;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar11));
  lib::L2CValue::L2CValue(aLStack320,param_4);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack320);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_REFLET_MAGIC_KIND_THUNDER);
  uVar4 = lib::L2CValue::operator==((L2CValue *)&local_80,(L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_REFLET_MAGIC_KIND_EL_THUNDER);
    uVar4 = lib::L2CValue::operator==((L2CValue *)&local_80,(L2CValue *)&local_70);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_REFLET_MAGIC_KIND_GIGA_THUNDER);
      uVar4 = lib::L2CValue::operator==((L2CValue *)&local_80,(L2CValue *)&local_70);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack304,1.0);
        goto LAB_710019bc18;
      }
      lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack192,0x19afadcac9);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      uVar8 = lib::L2CValue::as_integer(aLStack192);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,uVar8);
      lib::L2CValue::L2CValue(aLStack160,fVar9);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x21de6f0087);
      uVar4 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,uVar8);
      lib::L2CValue::L2CValue(aLStack208,fVar9);
      lib::L2CValue::operator-(aLStack160,aLStack208);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,64.0);
      lib::L2CValue::operator/((L2CValue *)&local_70,aLStack144);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack192,0x21de6f0087);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      uVar8 = lib::L2CValue::as_integer(aLStack192);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,uVar8);
      lib::L2CValue::L2CValue(aLStack160,fVar9);
      lib::L2CValue::L2CValue(aLStack224,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack240,0x1fe8c6f5f5);
      uVar4 = lib::L2CValue::as_integer(aLStack224);
      uVar8 = lib::L2CValue::as_integer(aLStack240);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,uVar8);
      lib::L2CValue::L2CValue(aLStack208,fVar9);
      lib::L2CValue::operator-(aLStack160,aLStack208);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,64.0);
      lib::L2CValue::operator/((L2CValue *)&local_70,aLStack144);
    }
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack176,0x1fe8c6f5f5);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar8 = lib::L2CValue::as_integer(aLStack176);
    fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),uVar4,uVar8);
    lib::L2CValue::L2CValue(aLStack144,fVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,64.0);
    lib::L2CValue::operator/((L2CValue *)&local_70,aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
  }
LAB_710019bc18:
  lib::L2CValue::~L2CValue((L2CValue *)&local_80);
  lib::L2CValue::~L2CValue(aLStack320);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_REFLET_INSTANCE_WORK_ID_SPECIAL_N_CHARGE_RATE);
  fVar9 = (float)lib::L2CValue::as_number(aLStack304);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)((long)param_1 + 0x40),fVar9,iVar2);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack304);
  return;
}

