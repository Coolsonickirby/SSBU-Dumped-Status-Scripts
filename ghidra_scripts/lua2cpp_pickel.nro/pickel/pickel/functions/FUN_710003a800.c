
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003a800(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  Hash40 HVar6;
  float fVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_NEXT_KIND);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,param_3);
    FUN_710003af30(aLStack128,param_2,aLStack160);
    lib::L2CValue::~L2CValue(aLStack160);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP);
        uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::operator=(aLStack96,aLStack128);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_NEXT_KIND);
          iVar2 = lib::L2CValue::as_integer(aLStack96);
          iVar3 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__set_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
          lib::L2CValue::~L2CValue(aLStack80);
        }
        goto LAB_710003ab30;
      }
      lib::L2CValue::operator=(aLStack96,aLStack128);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_NEXT_KIND);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(param_1,aLStack96);
      bVar1 = true;
    }
    else {
LAB_710003ab30:
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      uVar4 = app::lua_bind::MotionModule__end_frame_partial_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack144,uVar4);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      fVar7 = (float)app::lua_bind::MotionModule__frame_partial_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack176,fVar7);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,1);
      lib::L2CValue::operator-(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      uVar5 = lib::L2CValue::operator<=(aLStack192,aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      bVar1 = (uVar5 & 1) != 0;
      if (bVar1) {
        lib::L2CValue::L2CValue(param_1,aLStack96);
      }
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack144);
    }
    lib::L2CValue::~L2CValue(aLStack128);
    if (bVar1) goto LAB_710003ad9c;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,param_3);
    FUN_710003af30(aLStack80,param_2,aLStack112);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    uVar5 = lib::L2CValue::operator==(aLStack96,param_3);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,aLStack96);
      goto LAB_710003ad9c;
    }
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_NEXT_KIND);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::MotionModule__set_frame_partial_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,fVar7,true);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::MotionModule__remove_motion_partial_impl
              (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,false);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_PLATE_PARENT_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack128,iVar2);
    lib::L2CValue::~L2CValue(aLStack80);
    FUN_7100039a40(aLStack144,param_2);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,0x50000000);
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PICKEL_STATUS_SPECIAL_LW_INT_PLATE_PARENT_ID);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,iVar3);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x50000000);
      lib::L2CValue::operator=(aLStack128,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack80,0x50000000);
    uVar5 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      lib::L2CValue::L2CValue(aLStack144,0x14e8845f6d);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      HVar6 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,HVar6,0.0,1.0,false,false,
                 0.0,true,true,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MOTION_PART_SET_KIND_UPPER_BODY);
      lib::L2CValue::L2CValue(aLStack144,0x1cd735994b);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      HVar6 = lib::L2CValue::as_hash(aLStack144);
      app::lua_bind::MotionModule__add_motion_partial_impl
                (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar2,HVar6,0.0,1.0,false,false,
                 0.0,true,true,false);
    }
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(param_1,_FIGHTER_STATUS_KIND_NONE);
LAB_710003ad9c:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

