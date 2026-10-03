
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710004f610(long param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5,L2CValue *param_6,L2CValue *param_7,L2CValue *param_8,
                   L2CValue *param_9,L2CValue *param_10,L2CValue *param_11,L2CValue *param_12)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  long lVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  Fighter *pFVar9;
  float fVar10;
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
  
  iVar2 = lib::L2CValue::as_integer(param_3);
  HVar4 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack128,HVar4);
  uVar5 = lib::L2CValue::operator==(aLStack128,param_8);
  if ((uVar5 & 1) != 0) goto LAB_710004f85c;
  lib::L2CValue::L2CValue(aLStack160,aLStack128);
  lib::L2CValue::L2CValue(aLStack112,0x124eb7a24a);
  uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0x1128cdb3d8);
    uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710004f80c;
    lib::L2CValue::L2CValue(aLStack112,0x12b4b89f29);
    uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710004f80c;
    lib::L2CValue::L2CValue(aLStack112,0x11d2c28ebb);
    uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710004f80c;
    lib::L2CValue::L2CValue(aLStack112,0x13e7f9f0d5);
    uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710004f80c;
    lib::L2CValue::L2CValue(aLStack112,0x12f99e78ac);
    uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710004f80c;
    lib::L2CValue::L2CValue(aLStack112,0x1333b8cf0a);
    uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710004f80c;
    lib::L2CValue::L2CValue(aLStack112,0x122ddf4773);
    uVar5 = lib::L2CValue::operator==(aLStack160,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) goto LAB_710004f80c;
    lib::L2CValue::L2CValue(aLStack144,false);
  }
  else {
LAB_710004f80c:
    lib::L2CValue::L2CValue(aLStack144,true);
  }
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator==(aLStack144,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack160);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::operator=(param_4,param_5);
  }
LAB_710004f85c:
  lVar6 = lib::L2CValue::as_integer(param_4);
  iVar2 = lib::L2CValue::as_integer(param_7);
  app::lua_bind::WorkModule__set_int64_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),lVar6,iVar2);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_2ND_PART_SET);
  iVar2 = lib::L2CValue::as_integer(param_2);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  iVar2 = lib::L2CValue::as_integer(param_3);
  app::lua_bind::MotionModule__remove_motion_partial_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,false);
  iVar2 = lib::L2CValue::as_integer(param_2);
  HVar4 = lib::L2CValue::as_hash(param_4);
  app::lua_bind::MotionModule__add_motion_partial_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,HVar4,0.0,1.0,false,false,0.0,
             true,true,false);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator==(param_9,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar4 = lib::L2CValue::as_hash(param_6);
    fVar10 = (float)lib::L2CValue::as_number(aLStack112);
    fVar11 = (float)lib::L2CValue::as_number(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),HVar4,fVar10,fVar11,
               (bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack192,param_10);
  FUN_710004ff40(param_1,aLStack192);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack112,true);
  uVar5 = lib::L2CValue::operator==(param_10,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0x16);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator==(pLVar7,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLOAT_ATTACK_AIR_SPEED_X_MAX_MUL);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,1.0);
      uVar5 = lib::L2CValue::operator==(aLStack144,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        FUN_7100050280(param_1);
        FUN_71000504f0(param_1);
      }
      lib::L2CValue::~L2CValue(aLStack144);
    }
  }
  lib::L2CValue::L2CValue(aLStack144,0xc1f106e8d);
  lib::L2CValue::L2CValue(aLStack176,0x153b9338cc);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  uVar8 = lib::L2CValue::as_integer(aLStack176);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar8);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = lib::L2CValue::as_integer(param_11);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack144);
  iVar2 = lib::L2CValue::as_integer(param_12);
  fVar10 = (float)app::lua_bind::WorkModule__get_float_impl
                            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack144,fVar10);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar5 = lib::L2CValue::operator==(aLStack144,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack144,0x259636561f);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    HVar4 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::LinkModule__send_event_nodes_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,HVar4,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack144,0x227270baef);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    HVar4 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::LinkModule__send_event_nodes_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,HVar4,0);
  }
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack208,param_10);
  FUN_71000506c0(param_1,aLStack208);
  lib::L2CValue::~L2CValue(aLStack208);
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),4);
  pFVar9 = (Fighter *)lib::L2CValue::as_pointer(pLVar7);
  app::FighterSpecializer_Tantan::clear_control_command_punch(pFVar9);
  lib::L2CValue::L2CValue(aLStack224,0x6e5ec7051);
  lib::L2CValue::L2CValue(aLStack240,0x1d5e5c91ca);
  uVar5 = lib::L2CValue::as_integer(aLStack224);
  uVar8 = lib::L2CValue::as_integer(aLStack240);
  iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar8);
  lib::L2CValue::L2CValue(aLStack176,iVar2);
  lib::L2CValue::L2CValue(aLStack112,1);
  lib::L2CValue::operator+(aLStack176,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl
            (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar2,iVar3);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

