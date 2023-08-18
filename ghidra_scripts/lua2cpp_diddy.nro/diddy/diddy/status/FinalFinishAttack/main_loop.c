
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDiddy::status::FinalFinishAttack_main_loop(L2CFighterDiddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  float *pfVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  undefined4 *this_00;
  float fVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  undefined4 auStack192 [4];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined4 local_60;
  undefined4 uStack92;
  undefined4 local_58;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_DIDDY_STATUS_FINAL_WORK_FLOAT_ANGLE_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x31d39a761);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0x5a);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  fVar8 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,fVar8);
  lib::L2CValue::operator_(aLStack160,aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,-1);
  lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)auStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  uVar9 = lib::L2CValue::as_number(aLStack128);
  local_58 = lib::L2CValue::as_number((L2CValue *)auStack192);
  uVar10 = lib::L2CValue::as_number(aLStack208);
  uVar11 = CONCAT44(local_58,uVar9);
  uStack248 = (ulong)uVar10;
  local_100 = uVar11;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar3,(Vector3f *)&local_100,0,0);
  uStack92 = (undefined4)uVar11;
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack192);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,*pfVar4);
  lib::L2CValue::L2CValue(aLStack240,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack224,pfVar4[2]);
  FUN_710001a810(aLStack128,this,&local_100);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  local_60 = app::sv_camera_manager::dead_range(this->luaStateAgent);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_60);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x31ed91fca);
  uVar7 = lib::L2CValue::operator_(pLVar6,pLVar5);
  if ((uVar7 & 1) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x6895f72a4);
    uVar7 = lib::L2CValue::operator_(pLVar5,pLVar6);
    if ((uVar7 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x5b4ca7514);
      uVar7 = lib::L2CValue::operator_(pLVar6,pLVar5);
      if ((uVar7 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
        pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0x47a67e768);
        uVar7 = lib::L2CValue::operator_(pLVar5,pLVar6);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_FINAL_HIT_ZOOM);
          iVar2 = lib::L2CValue::as_integer(aLStack176);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
          uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack176);
          if ((uVar7 & 1) != 0) {
            iVar2 = app::lua_bind::SlowModule__whole_frame_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack160,iVar2);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
            uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::_L2CValue(aLStack160);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_FINAL_HIT_ZOOM);
              iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
              app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              app::lua_bind::CameraModule__zoom_out_impl(this->moduleAccessor,0);
              lib::L2CValue::L2CValue(aLStack160,true);
              FUN_710000a4e0(this,aLStack160);
              lib::L2CValue::_L2CValue(aLStack160);
            }
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack192,_FIGHTER_DIDDY_STATUS_FINAL_FLAG_GENERATE_EXPLODE_FLY);
          iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack192);
          bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
          lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
          lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
          uVar7 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::_L2CValue(aLStack176);
            this_00 = auStack192;
LAB_710001aec0:
            lib::L2CValue::_L2CValue((L2CValue *)this_00);
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack208,_FIGHTER_DIDDY_STATUS_FINAL_WORK_INT_FINAL_CLEAR_FRAME);
            iVar2 = lib::L2CValue::as_integer(aLStack208);
            iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
            lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
            pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
            uVar7 = lib::L2CValue::operator__((L2CValue *)&local_60,pLVar5);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue((L2CValue *)auStack192);
            if ((uVar7 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)auStack192,1);
              iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack192);
              bVar1 = app::lua_bind::AttackModule__is_attack_impl(this->moduleAccessor,iVar2,false);
              lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
              lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
              uVar7 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue((L2CValue *)auStack192);
              if ((uVar7 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_60,1);
                iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_60);
                app::lua_bind::AttackModule__clear_impl(this->moduleAccessor,iVar2,false);
                this_00 = &local_60;
                goto LAB_710001aec0;
              }
            }
          }
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          goto LAB_710001ac20;
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_DIDDY_STATUS_KIND_FINAL_READY_END);
  lib::L2CValue::L2CValue(aLStack160,false);
  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710001ac20:
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

