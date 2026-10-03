
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100006620(L2CFighterKen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  float fVar4;
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
  
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLAG_AUTO_TURN_END_STATUS);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack96,pLVar2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
  uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLOAT_OPPONENT_LR_1ON1);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,fVar4);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,fVar4);
    uVar3 = lib::L2CValue::operator==(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack144,iVar1);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator==(aLStack144,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) {
        pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
        lib::L2CValue::L2CValue(aLStack160,pLVar2);
        lib::L2CValue::L2CValue(aLStack176,aLStack96);
        lib::L2CValue::L2CValue(aLStack144,false);
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar3 = lib::L2CValue::operator==(aLStack144,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((uVar3 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_7100006c1c;
        }
        lib::L2CValue::L2CValue(aLStack144,false);
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_WALK);
        uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SQUAT);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SQUAT_RV);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_LIGHT);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_GUARD_ON);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_HI3);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ATTACK_LW3);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK_HI4_START);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ATTACK_LW4_START);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_CATCH);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ITEM_SWING);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_FINAL);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_WALK_BACK);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack208,aLStack96);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_ATTACK_NEAR);
          uVar3 = lib::L2CValue::operator==(aLStack208,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_SPECIAL_N_COMMAND);
            uVar3 = lib::L2CValue::operator==(aLStack208,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar3 & 1) != 0) goto LAB_7100006b38;
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_KIND_FINAL2);
            uVar3 = lib::L2CValue::operator==(aLStack208,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar3 & 1) != 0) goto LAB_7100006b38;
            lib::L2CValue::L2CValue(aLStack192,false);
          }
          else {
LAB_7100006b38:
            lib::L2CValue::L2CValue(aLStack192,true);
          }
          lib::L2CValue::L2CValue(aLStack80,true);
          uVar3 = lib::L2CValue::operator==(aLStack192,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack208);
          if ((uVar3 & 1) != 0) goto LAB_7100006b7c;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) {
            pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
            lib::L2CValue::L2CValue(aLStack224,pLVar2);
            FUN_71000072b0(aLStack192,aLStack224);
            lib::L2CValue::L2CValue(aLStack80,true);
            uVar3 = lib::L2CValue::operator==(aLStack192,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack192);
            lib::L2CValue::~L2CValue(aLStack224);
            if ((uVar3 & 1) != 0) goto LAB_7100006b9c;
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator=(aLStack144,aLStack80);
            goto LAB_7100006b94;
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) {
            pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_TURN_RUN);
            uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar3 & 1) != 0) goto LAB_7100006b9c;
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator=(aLStack144,aLStack80);
            goto LAB_7100006b94;
          }
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) {
            pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
            lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ATTACK);
            uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar3 & 1) != 0) {
              iVar1 = app::lua_bind::ComboModule__count_impl(this->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack192,iVar1);
              lib::L2CValue::L2CValue(aLStack80,0);
              uVar3 = lib::L2CValue::operator==(aLStack192,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack192);
              if ((uVar3 & 1) == 0) goto LAB_7100006b9c;
            }
            lib::L2CValue::L2CValue(aLStack80,true);
            lib::L2CValue::operator=(aLStack144,aLStack80);
            goto LAB_7100006b94;
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ITEM_THROW);
          uVar3 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar3 & 1) != 0) {
            pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
            lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
            uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar3 & 1) != 0) {
              pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x22);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_4);
              lib::L2CValue::operator&(pLVar2,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::L2CValue(aLStack80,0);
              uVar3 = lib::L2CValue::operator==(aLStack192,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::~L2CValue(aLStack192);
              if ((uVar3 & 1) == 0) {
                pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x22);
                lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_FB4);
                lib::L2CValue::operator&(pLVar2,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::L2CValue(aLStack80,0);
                uVar3 = lib::L2CValue::operator==(aLStack192,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack192);
                if ((uVar3 & 1) == 0) goto LAB_7100006b9c;
                lib::L2CValue::L2CValue(aLStack80,true);
                lib::L2CValue::operator=(aLStack144,aLStack80);
              }
              else {
                pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x22);
                lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_HI);
                lib::L2CValue::operator&(pLVar2,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::L2CValue(aLStack80,0);
                uVar3 = lib::L2CValue::operator==(aLStack192,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::~L2CValue(aLStack192);
                if ((uVar3 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack80,true);
                  lib::L2CValue::operator=(aLStack144,aLStack80);
                }
                else {
                  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x22);
                  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT3_FLAG_ITEM_LIGHT_THROW_LW);
                  lib::L2CValue::operator&(pLVar2,aLStack80);
                  lib::L2CValue::~L2CValue(aLStack80);
                  lib::L2CValue::L2CValue(aLStack80,0);
                  uVar3 = lib::L2CValue::operator==(aLStack192,aLStack80);
                  lib::L2CValue::~L2CValue(aLStack80);
                  lib::L2CValue::~L2CValue(aLStack192);
                  if ((uVar3 & 1) != 0) goto LAB_7100006b9c;
                  lib::L2CValue::L2CValue(aLStack80,true);
                  lib::L2CValue::operator=(aLStack144,aLStack80);
                }
              }
              goto LAB_7100006b94;
            }
          }
        }
        else {
LAB_7100006b7c:
          lib::L2CValue::L2CValue(aLStack80,true);
          lib::L2CValue::operator=(aLStack144,aLStack80);
LAB_7100006b94:
          lib::L2CValue::~L2CValue(aLStack80);
        }
LAB_7100006b9c:
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar3 = lib::L2CValue::operator==(aLStack144,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar3 & 1) != 0) {
          fVar4 = (float)lib::L2CValue::as_number(aLStack128);
          app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar4);
          app::lua_bind::PostureModule__update_rot_y_lr_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue
                    (aLStack80,
                     _FIGHTER_SPECIAL_COMMAND_USER_INSTANCE_WORK_ID_FLAG_AUTO_TURN_END_STATUS);
          iVar1 = lib::L2CValue::as_integer(aLStack80);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
          lib::L2CValue::~L2CValue(aLStack80);
        }
        lib::L2CValue::~L2CValue(aLStack144);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100006c1c:
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

