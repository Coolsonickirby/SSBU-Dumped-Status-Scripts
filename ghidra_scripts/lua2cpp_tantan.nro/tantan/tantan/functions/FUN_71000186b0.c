
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000186b0(L2CValue *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this;
  ulong uVar6;
  float fVar7;
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
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::StopModule__is_stop_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100018d88;
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_BOTH_RESTRICT_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__count_down_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,0);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__count_down_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,0);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator<=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_INFINITY_SMASH_HOLD);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
LAB_71000189ec:
        lib::L2CValue::L2CValue(aLStack80,1);
        lib::L2CValue::operator-(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::operator=(aLStack96,aLStack112);
        goto LAB_7100018ad0;
      }
      lib::L2CValue::L2CValue(aLStack80,1);
      uVar5 = lib::L2CValue::operator<(aLStack80,aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) goto LAB_71000189ec;
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_STRANS_OFF_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      iVar2 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack112,iVar2);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator<(aLStack80,aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,1);
        lib::L2CValue::operator-(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::operator=(aLStack112,aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::L2CValue(aLStack80,0);
        uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,1);
          uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack80,0);
            lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PAD_CMD_CAT1_JUMP);
            iVar2 = lib::L2CValue::as_integer(aLStack80);
            uVar3 = lib::L2CValue::as_integer(aLStack128);
            app::lua_bind::FighterControlModuleImpl__delete_command_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,uVar3);
            lib::L2CValue::~L2CValue(aLStack128);
            this = aLStack80;
            goto LAB_7100018a90;
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack176,true);
          FUN_7100018fa0(param_2,aLStack176);
          this = aLStack176;
LAB_7100018a90:
          lib::L2CValue::~L2CValue(this);
        }
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_STRANS_OFF_FRAME);
        iVar2 = lib::L2CValue::as_integer(aLStack112);
        iVar4 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar4);
        lib::L2CValue::~L2CValue(aLStack80);
      }
LAB_7100018ad0:
      lib::L2CValue::~L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar4);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MAP_COLL_FRAME_L)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__count_down_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,0);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack192,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_MAP_COLL_OFFSET_X_L);
      lib::L2CValue::L2CValue(aLStack208,0x57bdfbd15);
      lib::L2CValue::L2CValue(aLStack80,0xc1f106e8d);
      lib::L2CValue::L2CValue(aLStack112,0x1120d05587);
      uVar5 = lib::L2CValue::as_integer(aLStack80);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack224,fVar7);
      FUN_7100019220(param_2,aLStack192,aLStack208,aLStack224);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack192);
    }
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MAP_COLL_FRAME_R)
    ;
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__count_down_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,0);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_MAP_COLL_OFFSET_X_R);
      lib::L2CValue::L2CValue(aLStack256,0x5af9e82ca);
      lib::L2CValue::L2CValue(aLStack80,0xc1f106e8d);
      lib::L2CValue::L2CValue(aLStack112,0x1120d05587);
      uVar5 = lib::L2CValue::as_integer(aLStack80);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack272,fVar7);
      FUN_7100019220(param_2,aLStack240,aLStack256,aLStack272);
      lib::L2CValue::~L2CValue(aLStack272);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack240);
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__inc_int_impl(*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_7100018d88:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

