
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002e060(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *this;
  float fVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_TARGET_SAME_FLOOR);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator!(aLStack96);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0xaa3c06ee2);
    lib::L2CValue::L2CValue(aLStack112,0xcd58294a3);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_FREE_DISABLE_JUMP)
    ;
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack112);
      pLVar6 = aLStack128;
LAB_710002e2f8:
      lib::L2CValue::~L2CValue(pLVar6);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_JUMP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue(aLStack176,0xaa3c06ee2);
      lib::L2CValue::L2CValue(aLStack192,0xd912f7c58);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      uVar4 = lib::L2CValue::operator<(aLStack80,aLStack160);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_Y);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                                 (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack80,fVar7);
        uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(param_1,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_JUMP_SQUAT);
          goto LAB_710002e720;
        }
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_HIT_WALL_FRAME);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar3 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack112,iVar3);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar4 = lib::L2CValue::operator<(aLStack80,aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack128,0xaa3c06ee2);
          lib::L2CValue::L2CValue(aLStack144,0x11752f5637);
          uVar4 = lib::L2CValue::as_integer(aLStack128);
          uVar5 = lib::L2CValue::as_integer(aLStack144);
          iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                            (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar4,uVar5);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          uVar4 = lib::L2CValue::operator<=(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack128);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(param_1,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_JUMP_SQUAT);
            lib::L2CValue::~L2CValue(aLStack112);
            goto LAB_710002e720;
          }
        }
        pLVar6 = aLStack112;
        goto LAB_710002e2f8;
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      bVar1 = app::lua_bind::GroundModule__pass_floor_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack144,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_Y);
        iVar3 = lib::L2CValue::as_integer(aLStack144);
        fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                                 (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack128,fVar7);
        lib::L2CValue::operator-(aLStack96);
        uVar4 = lib::L2CValue::operator<=(aLStack128,aLStack160);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack192,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_PARENT_SPEED_Y);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                                   (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack176,fVar7);
          lib::L2CValue::L2CValue(aLStack80,0.0);
          uVar4 = lib::L2CValue::operator<=(aLStack176,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack128);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar4 & 1) != 0) {
            lib::L2CValue::L2CValue(param_1,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_FALL);
            goto LAB_710002e720;
          }
          goto LAB_710002e558;
        }
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
      }
      lib::L2CValue::~L2CValue(aLStack112);
    }
LAB_710002e558:
    lib::L2CValue::~L2CValue(aLStack96);
  }
  this = (L2CValue *)(param_2 + 200);
  pLVar6 = (L2CValue *)lib::L2CValue::operator[](this,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(pLVar6,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if (((uVar4 & 1) == 0) ||
     (bVar2 = lib::L2CValue::operator.cast.to.bool(param_3), (bVar2 & 1U) == 0))
  goto LAB_710002e6f4;
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLOAT_TARGET_X);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,-2.0);
  uVar4 = lib::L2CValue::operator<(aLStack80,aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
LAB_710002e678:
    FUN_710002e930(aLStack80,param_2);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(param_1,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_TURN);
LAB_710002e720:
      lib::L2CValue::~L2CValue(aLStack96);
      return;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](this,9);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_GROUND_MOVE);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_GROUND_MOVE);
      goto LAB_710002e720;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,2.0);
    uVar4 = lib::L2CValue::operator<(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) goto LAB_710002e678;
    pLVar6 = (L2CValue *)lib::L2CValue::operator[](this,9);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_WAIT);
    uVar4 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,_WEAPON_ROSETTA_TICO_STATUS_KIND_FREE_WAIT);
      goto LAB_710002e720;
    }
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710002e6f4:
  lib::L2CValue::L2CValue(param_1,_WEAPON_ROSETTA_TICO_STATUS_KIND_NONE);
  return;
}

