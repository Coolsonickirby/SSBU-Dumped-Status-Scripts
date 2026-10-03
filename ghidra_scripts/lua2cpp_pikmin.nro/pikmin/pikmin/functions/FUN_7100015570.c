
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100015570(long param_1,L2CValue *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong *this;
  uint uVar7;
  float fVar8;
  long lVar9;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  ulong auStack192 [2];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,0);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_2);
  pLVar6 = (L2CValue *)(param_1 + 200);
  if ((bVar1 & 1U) == 0) {
LAB_710001569c:
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) {
      fVar8 = (float)app::lua_bind::PostureModule__lr_impl
                               (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar8);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack192,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_COMMON_FLAG_TURN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
        lib::L2CValue::operator*(aLStack160,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator=(aLStack160,(L2CValue *)auStack192);
        lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIKMIN_TURN_NEUTRAL);
      lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      uVar5 = lib::L2CValue::operator<(aLStack160,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
        uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,aLStack160);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) != 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.1);
          uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,pLVar4);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar5 & 1) == 0) {
            pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0.1);
            uVar5 = lib::L2CValue::operator<(pLVar6,(L2CValue *)&local_60);
            lib::L2CValue::~L2CValue((L2CValue *)&local_60);
            if ((uVar5 & 1) == 0) goto LAB_7100015970;
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIKMIN_TURN_BACK);
            lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIKMIN_TURN_FRONT);
            lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
          }
          goto LAB_7100015968;
        }
      }
      else {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.1);
        uVar5 = lib::L2CValue::operator<((L2CValue *)&local_60,pLVar4);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0x1a);
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0.1);
          uVar5 = lib::L2CValue::operator<(pLVar6,(L2CValue *)&local_60);
          lib::L2CValue::~L2CValue((L2CValue *)&local_60);
          if ((uVar5 & 1) == 0) goto LAB_7100015970;
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIKMIN_TURN_FRONT);
          lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIKMIN_TURN_BACK);
          lib::L2CValue::operator=(aLStack144,(L2CValue *)&local_60);
        }
LAB_7100015968:
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      }
LAB_7100015970:
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIKMIN_TURN_FRONT);
      uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PIKMIN_TURN_BACK);
        uVar5 = lib::L2CValue::operator==(aLStack144,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        if ((uVar5 & 1) != 0) {
          FUN_7100016190(param_1);
        }
      }
      else {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_60,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_COMMON_FLAG_REQUEST_TURN)
        ;
        iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
        app::lua_bind::WorkModule__off_flag_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      }
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack192,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_COMMON_FLAG_TURN);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    if ((bVar1 & 1U) == 0) goto LAB_7100015f08;
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_COMMON_FLOAT_TURN_TIME);
    iVar3 = lib::L2CValue::as_integer(aLStack224);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                             (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack208,fVar8);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.05);
    lib::L2CValue::operator+(aLStack208,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator=(aLStack128,(L2CValue *)auStack192);
    lib::L2CValue::~L2CValue((L2CValue *)auStack192);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
    uVar5 = lib::L2CValue::operator<=((L2CValue *)&local_60,aLStack128);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
      uVar5 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) goto LAB_7100015b20;
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator+(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_COMMON_FLOAT_TURN_TIME);
      fVar8 = (float)lib::L2CValue::as_number((L2CValue *)auStack192);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_float_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar8,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.5);
      lib::L2CValue::operator/(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator=(aLStack128,(L2CValue *)auStack192);
      lib::L2CValue::~L2CValue((L2CValue *)auStack192);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
      uVar5 = lib::L2CValue::operator<(aLStack128,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
        lib::L2CValue::operator-(aLStack128,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator=(aLStack128,(L2CValue *)auStack192);
        lib::L2CValue::~L2CValue((L2CValue *)auStack192);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,2.0);
        lib::L2CValue::operator-(aLStack128,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator=(aLStack176,(L2CValue *)auStack192);
        lib::L2CValue::~L2CValue((L2CValue *)auStack192);
        lib::L2CValue::operator*(aLStack128,aLStack176);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
        lib::L2CValue::operator-(aLStack240,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,-0.5);
        lib::L2CValue::operator*((L2CValue *)&local_60,aLStack224);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
        lib::L2CValue::operator+(aLStack208,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator=(aLStack112,(L2CValue *)auStack192);
        lib::L2CValue::~L2CValue((L2CValue *)auStack192);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack224);
        pLVar6 = aLStack240;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.5);
        lib::L2CValue::operator*((L2CValue *)&local_60,aLStack128);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator*(aLStack224,aLStack128);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
        lib::L2CValue::operator+(aLStack208,(L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::operator=(aLStack112,(L2CValue *)auStack192);
        lib::L2CValue::~L2CValue((L2CValue *)auStack192);
        lib::L2CValue::~L2CValue(aLStack208);
        pLVar6 = aLStack224;
      }
      lib::L2CValue::~L2CValue(pLVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-180.0);
      lib::L2CValue::operator*((L2CValue *)&local_60,aLStack112);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator=(aLStack112,(L2CValue *)auStack192);
      this = auStack192;
    }
    else {
LAB_7100015b20:
      app::lua_bind::PostureModule__reverse_lr_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      app::lua_bind::PostureModule__update_rot_y_lr_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_COMMON_FLAG_TURN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__off_flag_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
      uVar5 = lib::L2CValue::operator==(param_2,(L2CValue *)&local_60);
      lib::L2CValue::~L2CValue((L2CValue *)&local_60);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack192,_FIGHTER_PIKMIN_STATUS_SPECIAL_HI_COMMON_FLAG_REQUEST_TURN
                  );
        iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack192);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)&local_60);
        lib::L2CValue::~L2CValue((L2CValue *)auStack192);
        if ((bVar1 & 1U) != 0) {
          FUN_7100016190(param_1);
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::operator=(aLStack112,(L2CValue *)&local_60);
      this = &local_60;
    }
    lib::L2CValue::~L2CValue((L2CValue *)this);
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    uVar5 = lib::L2CValue::as_number((L2CValue *)auStack192);
    lVar9 = lib::L2CValue::as_number(aLStack112);
    uVar7 = lib::L2CValue::as_number(aLStack208);
    local_60 = uVar5 & 0xffffffff | lVar9 << 0x20;
    uStack88 = (ulong)uVar7;
    app::lua_bind::PostureModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_60,0);
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_STATUS_KIND_ATTACK_AIR);
    uVar5 = lib::L2CValue::operator==(pLVar4,(L2CValue *)&local_60);
    lib::L2CValue::~L2CValue((L2CValue *)&local_60);
    if ((uVar5 & 1) == 0) goto LAB_710001569c;
    lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lib::L2CValue::L2CValue(aLStack224,0.0);
    uVar5 = lib::L2CValue::as_number((L2CValue *)auStack192);
    lVar9 = lib::L2CValue::as_number(aLStack208);
    uVar7 = lib::L2CValue::as_number(aLStack224);
    local_60 = uVar5 & 0xffffffff | lVar9 << 0x20;
    uStack88 = (ulong)uVar7;
    app::lua_bind::PostureModule__set_rot_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),(Vector3f *)&local_60,0);
    lib::L2CValue::~L2CValue(aLStack224);
  }
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue((L2CValue *)auStack192);
LAB_7100015f08:
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

