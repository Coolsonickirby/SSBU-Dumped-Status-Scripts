
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003ed80(long param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  BattleObjectModuleAccessor *pBVar9;
  float fVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar4 = app::lua_bind::StatusModule__status_kind_impl
                    (*(BattleObjectModuleAccessor **)(param_1 + 0x40));
  lib::L2CValue::L2CValue(aLStack96,iVar4);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_FINAL_AIR_END);
  uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_FINAL2);
    uVar5 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) goto LAB_710003ef7c;
    lib::L2CValue::L2CValue(aLStack80,_CAMERA_QUAKE_KIND_KEEPSMALL);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::CameraModule__stop_quake_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  }
  else {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FALL_SPECIAL);
    uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_1 + 200),0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_FALL_SPECIAL);
      uVar5 = lib::L2CValue::operator==(pLVar6,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) goto LAB_710003ef7c;
    }
    lib::L2CValue::L2CValue(aLStack112,0xdf05c072b);
    lib::L2CValue::L2CValue(aLStack128,0x13e88e7406);
    uVar5 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    iVar4 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_1 + 0x40),uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack80,iVar4);
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    fVar10 = (float)lib::L2CValue::as_number(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::WorkModule__set_float_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),fVar10,iVar4);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_LANDING_CANCEL);
    iVar4 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
  }
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710003ef7c:
  lib::L2CValue::~L2CValue(aLStack96);
  pLVar6 = (L2CValue *)(param_1 + 200);
  pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_FINAL_JUMP);
  uVar5 = lib::L2CValue::operator==(pLVar8,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_FINAL_FALL);
    uVar5 = lib::L2CValue::operator==(pLVar8,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_FINAL_LANDING);
      uVar5 = lib::L2CValue::operator==(pLVar8,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_FINAL_AIR_END);
        uVar5 = lib::L2CValue::operator==(pLVar8,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_FINAL_HIT);
          uVar5 = lib::L2CValue::operator==(pLVar8,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            pLVar8 = (L2CValue *)lib::L2CValue::operator[](pLVar6,0xb);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_FINAL2);
            uVar5 = lib::L2CValue::operator==(pLVar8,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack96,_FIGHTER_LINK_NO_FINAL);
              iVar4 = lib::L2CValue::as_integer(aLStack96);
              bVar1 = app::lua_bind::LinkModule__is_linked_impl
                                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
              lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
              bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((bVar2 & 1U) != 0) {
                app::LinkEvent::new_l2c_table();
                pLVar8 = (L2CValue *)lib::L2CValue::operator[](aLStack96,0x105a79305b);
                lib::L2CValue::L2CValue(aLStack80,0xca6184e65);
                lib::L2CValue::operator=(pLVar8,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LINK_NO_FINAL);
                FUN_710003dae0(aLStack80,param_1,aLStack112,aLStack96);
                lib::L2CValue::operator=(aLStack96,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack112);
                lib::L2CValue::~L2CValue(aLStack96);
              }
              lib::L2CValue::L2CValue
                        (aLStack96,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLAG_INVISIBLE_STAGE);
              iVar4 = lib::L2CValue::as_integer(aLStack96);
              bVar1 = app::lua_bind::WorkModule__is_flag_impl
                                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar4);
              lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
              bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((bVar2 & 1U) != 0) {
                pLVar6 = (L2CValue *)lib::L2CValue::operator[](pLVar6,5);
                lib::L2CValue::L2CValue(aLStack80,true);
                lib::L2CValue::L2CValue(aLStack96,true);
                pBVar9 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
                bVar1 = lib::L2CValue::as_bool(aLStack80);
                bVar3 = lib::L2CValue::as_bool(aLStack96);
                app::FighterSpecializer_Ryu::set_final_stage_disp_status
                          (pBVar9,(bool)(bVar1 & 1),(bool)(bVar3 & 1));
                lib::L2CValue::~L2CValue(aLStack96);
                lib::L2CValue::~L2CValue(aLStack80);
              }
              lib::L2CValue::L2CValue(aLStack160,true);
              FUN_710000f9e0(param_1,aLStack160);
              lib::L2CValue::~L2CValue(aLStack160);
            }
          }
        }
      }
    }
  }
  return;
}

