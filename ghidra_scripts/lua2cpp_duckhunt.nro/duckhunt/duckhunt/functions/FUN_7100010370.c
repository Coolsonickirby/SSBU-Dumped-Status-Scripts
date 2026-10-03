
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010370(long param_1,L2CValue *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong *puVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong auStack160 [2];
  L2CValue aLStack144 [16];
  ulong auStack128 [2];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  pLVar6 = (L2CValue *)(param_1 + 200);
  pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_COMMON_FLAG_TURN);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,-1.0);
      lib::L2CValue::operator*(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator=(aLStack96,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DUCKHUNT_TURN_NEUTRAL);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar5 = lib::L2CValue::operator<(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_50,aLStack96);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) != 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.1);
        uVar5 = lib::L2CValue::operator<((L2CValue *)&local_50,pLVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0.1);
          uVar5 = lib::L2CValue::operator<(pLVar6,(L2CValue *)&local_50);
          lib::L2CValue::~L2CValue((L2CValue *)&local_50);
          if ((uVar5 & 1) == 0) goto LAB_7100010644;
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DUCKHUNT_TURN_BACK);
          lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DUCKHUNT_TURN_FRONT);
          lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
        }
        goto LAB_710001063c;
      }
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.1);
      uVar5 = lib::L2CValue::operator<((L2CValue *)&local_50,pLVar4);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.1);
        uVar5 = lib::L2CValue::operator<(pLVar6,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        if ((uVar5 & 1) == 0) goto LAB_7100010644;
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DUCKHUNT_TURN_FRONT);
        lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DUCKHUNT_TURN_BACK);
        lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
      }
LAB_710001063c:
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    }
LAB_7100010644:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DUCKHUNT_TURN_FRONT);
    uVar5 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_DUCKHUNT_TURN_BACK);
      uVar5 = lib::L2CValue::operator==(aLStack112,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) != 0) {
        FUN_7100010e30(param_1);
      }
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_COMMON_FLAG_REQUEST_TURN)
      ;
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    }
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_COMMON_FLAG_TURN);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    return;
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack128,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_COMMON_FLOAT_TURN_TIME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack128);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.05);
  lib::L2CValue::operator+(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
  uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_50,aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    uVar5 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator+(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_COMMON_FLOAT_TURN_TIME);
      fVar8 = (float)lib::L2CValue::as_number((L2CValue *)auStack128);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar8,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)auStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.5);
      lib::L2CValue::operator/(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator=(aLStack96,(L2CValue *)auStack128);
      lib::L2CValue::~L2CValue((L2CValue *)auStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
      uVar5 = lib::L2CValue::operator<(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
        lib::L2CValue::operator-(aLStack96,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::operator=(aLStack96,(L2CValue *)auStack128);
        lib::L2CValue::~L2CValue((L2CValue *)auStack128);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,2.0);
        lib::L2CValue::operator-(aLStack96,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::operator*(aLStack96,(L2CValue *)auStack128);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
        lib::L2CValue::operator-(aLStack192,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,-0.5);
        lib::L2CValue::operator*((L2CValue *)&local_50,aLStack176);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
        lib::L2CValue::operator+((L2CValue *)auStack160,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::operator=(aLStack112,aLStack144);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue((L2CValue *)auStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack192);
        puVar7 = auStack128;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.5);
        lib::L2CValue::operator*((L2CValue *)&local_50,aLStack96);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::operator*((L2CValue *)auStack160,aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
        lib::L2CValue::operator+(aLStack144,(L2CValue *)&local_50);
        lib::L2CValue::~L2CValue((L2CValue *)&local_50);
        lib::L2CValue::operator=(aLStack112,(L2CValue *)auStack128);
        lib::L2CValue::~L2CValue((L2CValue *)auStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        puVar7 = auStack160;
      }
      lib::L2CValue::~L2CValue((L2CValue *)puVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,-180.0);
      lib::L2CValue::operator*((L2CValue *)&local_50,aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator=(aLStack112,(L2CValue *)auStack128);
      puVar7 = auStack128;
      goto LAB_7100010b5c;
    }
  }
  app::lua_bind::PostureModule__reverse_lr_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  app::lua_bind::PostureModule__update_rot_y_lr_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_COMMON_FLAG_TURN);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__off_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  uVar5 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_50);
  lib::L2CValue::~L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack128,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_COMMON_FLAG_REQUEST_TURN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)&local_50);
    lib::L2CValue::~L2CValue((L2CValue *)auStack128);
    if ((bVar2 & 1U) != 0) {
      FUN_7100010e30(param_1);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_50);
  puVar7 = &local_50;
LAB_7100010b5c:
  lib::L2CValue::~L2CValue((L2CValue *)puVar7);
  lib::L2CValue::L2CValue((L2CValue *)auStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar5 = lib::L2CValue::as_number((L2CValue *)auStack128);
  lVar10 = lib::L2CValue::as_number(aLStack112);
  uVar9 = lib::L2CValue::as_number(aLStack144);
  local_50 = uVar5 & 0xffffffff | lVar10 << 0x20;
  uStack72 = (ulong)uVar9;
  app::lua_bind::PostureModule__set_rot_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_50,0);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)auStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

