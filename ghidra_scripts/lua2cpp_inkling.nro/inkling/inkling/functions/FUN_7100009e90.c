
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100009e90(long param_1,L2CValue *param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  float fVar4;
  uint uVar5;
  long lVar6;
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  ulong local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_40,false);
  uVar2 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    uVar2 = lib::L2CValue::as_number(aLStack80);
    lVar6 = lib::L2CValue::as_number(aLStack96);
    uVar5 = lib::L2CValue::as_number(aLStack112);
    local_40 = uVar2 & 0xffffffff | lVar6 << 0x20;
    uStack56 = (ulong)uVar5;
    app::lua_bind::PostureModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_40,0);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_PRE_GROUND_DEGREE);
    fVar4 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE);
    fVar4 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE_SPEED);
    fVar4 = (float)lib::L2CValue::as_number((L2CValue *)&local_40);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue(aLStack80);
    lVar6 = -0x30;
    goto LAB_710000a3f4;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE)
  ;
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,fVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_PRE_GROUND_DEGREE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,fVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE_SPEED);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  uVar2 = lib::L2CValue::operator==(aLStack112,aLStack96);
  if ((uVar2 & 1) == 0) {
    pLVar3 = aLStack96;
    lib::L2CValue::operator-(aLStack80,pLVar3);
    lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,10.0);
    lib::L2CValue::operator/((L2CValue *)(auStack176 + 0x10),(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::operator=(aLStack128,aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)auStack176);
    lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
    lib::L2CValue::operator+(aLStack96,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_PRE_GROUND_DEGREE)
    ;
    fVar4 = (float)lib::L2CValue::as_number(aLStack144);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  lib::L2CValue::operator+(aLStack96,aLStack128);
  uVar2 = lib::L2CValue::operator<((L2CValue *)&local_40,aLStack80);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::operator-(aLStack96,aLStack128);
    uVar2 = lib::L2CValue::operator<(aLStack80,(L2CValue *)&local_40);
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::operator+(aLStack80,aLStack128);
      lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
      goto LAB_710000a27c;
    }
    lib::L2CValue::operator=(aLStack80,aLStack96);
  }
  else {
    lib::L2CValue::operator-(aLStack80,aLStack128);
    lib::L2CValue::operator=(aLStack80,(L2CValue *)&local_40);
LAB_710000a27c:
    lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  }
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),0.0);
  uVar2 = lib::L2CValue::as_number(aLStack80);
  lVar6 = lib::L2CValue::as_number(aLStack144);
  uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack176 + 0x10));
  local_40 = uVar2 & 0xffffffff | lVar6 << 0x20;
  uStack56 = (ulong)uVar5;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_40,0);
  lib::L2CValue::~L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  lib::L2CValue::operator+(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE)
  ;
  fVar4 = (float)lib::L2CValue::as_number(aLStack144);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0.0);
  lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_40);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_INKLING_STATUS_SPECIAL_S_WORK_FLOAT_DEGREE_SPEED);
  fVar4 = (float)lib::L2CValue::as_number(aLStack144);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  app::lua_bind::WorkModule__set_float_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar4,iVar1);
  lib::L2CValue::~L2CValue((L2CValue *)&local_40);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lVar6 = -0x40;
LAB_710000a3f4:
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar6));
  return;
}

